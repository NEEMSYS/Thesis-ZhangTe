#!/usr/bin/env python
#-*- coding: utf-8 -*-

import os
import re
import sys

src_linenum = None
c_fn = None
ast = None


def get_deep(line_ast):
    # to obtain the deepin of a line ast rely on the number of '\t'
    tab_num = re.findall('\t+', line_ast)
    return 0 if tab_num == [] else len(tab_num[0])

def is_funcdef(ast_line, ast):
    """ An ast line is a function define?
    Args: ast_line: str
            An line in ast
          ast: list (str)
            The entire ast
    Retavl:
          False if is not a function else True
    """
    if ast_line not in ast:
        return False
    if 'FUNCTION_DECL' not in ast_line:
        return False
    idx = ast.index(ast_line)
    deep = get_deep(ast_line)
    for i in range(idx + 1, len(ast)):
        d = get_deep(ast[i])
        if d > deep and 'COMPOUND_STMT' in ast[i]:
            return True
        if d <= deep:
            break
    return False

def get_func_name_line(ast_funcdef_line):
    """ get the function name and the number of line in source file.
    Arg: ast_funcdef_line: str
           a str line in ast, which declare a function.
    Retval: tuple
         (function name, number of line in source file) or None
    """
    info = re.findall("CursorKind.FUNCTION_DECL (.*?) .+?, line ([0-9]+), .+?", ast_funcdef_line)
    if not info: return None
    return info[0][0], int(info[0][1])

def count_numline_func(func_start):
    """ 统计一个函数占了多少行,func_start为函数定义所在行号. 行号在源文件中是从1开始的
    """
    idx = func_start - 1
    count = 0
    while True:
        if '{' in src_linenum[idx][1]:
            count += src_linenum[idx][1].count('{')
            count -= src_linenum[idx][1].count('}')
            break
        idx += 1
    while count != 0:
        idx += 1
        count += src_linenum[idx][1].count('{')
        count -= src_linenum[idx][1].count('}')
    return idx - func_start + 2
    

def get_func_lines(func, ast):
    """ 根据一个函数名,获得该函数占了多少行
    说明: 如果函数定义无效,例如函数内部没有任何语句,则在生成AST的过程中编译器前端不会生成该函数的函数体信息,因此返回值将为None
    """
    info = None
    for e in ast:
        if func in e:
            if is_funcdef(e, ast):
                info = get_func_name_line(e)
                if func == info[0]:
                    break
    return None if not info else count_numline_func(info[1])

def get_funcast_line(func):
    """ 根据函数名获得函数在源文件中的位置
    """
    for e in ast:
        if func in e:
            if is_funcdef(e, ast):
                return get_func_name_line(e)[1]
                


def ast_init(src_file):
    global src_linenum
    global c_fn
    global ast
    c_fn = src_file
    with open(c_fn, 'r') as f:
        src = f.readlines()
    src_linenum = zip(range(1, len(src)+1), src) # add number of lines
    src_linenum = list(map(lambda e: list(e), src_linenum))

    # execute script, test_libclang, to get ast into `ast`
    ast = os.popen('python test_libclang.py %s'%c_fn).readlines()


def func_lines(func):
    """ 根据函数名获得该函数占了多少行 """
    global ast
    lines = get_func_lines(func, ast)
    return 0 if lines == None else lines

# 存储所有函数内调用的函数,否则递归开销太大了
all_function_involved = {}
def involve_func(func):
    """  获得函数func递归调用的所有函数. 不同函数调用相同函数,返回值会有重复,set处理
    Args: func: str 函数名字
    Retval: list, 包含了所有被func调用的函数
    """ 
    global all_function_involved   
    global funcs
    idx = 0
    deep = 0
    temp_funcs = []
    for i in range(len(ast)):
        if func in ast[i]:
            if is_funcdef(ast[i], ast):
                deep = get_deep(ast[i])
                idx = i + 1
    for i in range(idx, len(ast)):
        d = get_deep(ast[i])
        if d > deep and 'CursorKind.CALL_EXPR' in ast[i]:
            tempfunc =  re.findall("CursorKind.CALL_EXPR (.*?) .+?, line.+?", ast[i])[0]
            if tempfunc not in temp_funcs: temp_funcs.append(tempfunc)
        if d <= deep: break
    if temp_funcs == []: return []
    for e in temp_funcs:
        if e not in all_function_involved:
            all_function_involved[e] = involve_func(e)
            temp_funcs += all_function_involved[e]
            print('\t\tadd', e, 'to { }', len(all_function_involved))
        else:
            print('[\t:)]', e, 'in the { }')
            temp_funcs += all_function_involved[e]
    return temp_funcs
    
store = {} # 已经计算的存储在这里    
def recursion_func_lines(func):
    global store
    funcs = [func] + involve_func(func)# all function involed
    funcs = list(set(funcs))
    lines_num = 0
    print('\t[info]: get all functions', '...')
    for f in funcs:
        if f in store:
            lines_num += store[f]
        else:
            lines = func_lines(f)
            store[f] = lines
            lines_num += lines
    return lines_num


def no_recursion_sonfunc(func):
    """  获得函数func下所有函数,不包括函数的函数,即不递归
    Args: func: str 函数名字
    Retval: list, 包含了所有被func调用的函数
    """ 
    global all_function_involved   
    global funcs
    idx = 0
    deep = 0
    temp_funcs = []
    for i in range(len(ast)):
        if func in ast[i]:
            if is_funcdef(ast[i], ast):
                deep = get_deep(ast[i])
                idx = i + 1
    for i in range(idx, len(ast)):
        d = get_deep(ast[i])
        if d > deep and 'CursorKind.CALL_EXPR' in ast[i]:
            tempfunc =  re.findall("CursorKind.CALL_EXPR (.*?) .+?, line.+?", ast[i])[0]
            if tempfunc not in temp_funcs: temp_funcs.append(tempfunc)
        if d <= deep: break
    return [] if temp_funcs == [] else temp_funcs

son_fun = {}

def no_recursion_func_lines(func):
    """ 非递归方法计算func的函数及其所有孙子函数的行数
    """
    global son_fun
    ini = [func]
    idx = 0
    upto = len(ini) 
    while True:
        upto = len(ini)
        while idx < upto:
            if ini[idx] not in son_fun:
                temp = no_recursion_sonfunc(ini[idx])
                son_fun[ini[idx]] = temp
            else:
                temp = son_fun[ini[idx]]
            for e2 in temp:
                if e2 not in ini:
                    ini.append(e2)
            idx += 1
        if upto == len(ini): break
    return ini
            
_funcs_lines = {}

def f_lines(func):
    fs = no_recursion_func_lines(func)
    lines_num = 0
    for e in fs:
        if e not in _funcs_lines:
            temp_num = func_lines(e)
            _funcs_lines[e] = temp_num
            lines_num += temp_num
        else:
            lines_num += _funcs_lines[e]
    return lines_num

if __name__ == '__main__':

    ast_init('./app.c')
    #print(recursion_func_lines('ArbiterP__1__grantedTask__runTask'))
    print(f_lines('ArbiterP__1__grantedTask__runTask'))
    #ast_init('test_app.c')
    #print(f_lines('main'))    
    #ast_init('test_app.c')
    

'''
for e in ast:
    if is_funcdef(e, ast):
        func = get_func_name_line(e)
        print(func[0], count_numline_func(func[1]))
        #print(func[0], func[1])
'''
    
