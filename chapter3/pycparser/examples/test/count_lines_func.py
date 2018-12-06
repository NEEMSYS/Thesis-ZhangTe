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
    """
    info = None
    for e in ast:
        if func in e:
            if is_funcdef(e, ast):
                info = get_func_name_line(e)
                break
    return count_numline_func(info[1])

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
    src_linenum = map(lambda e: list(e), src_linenum)

    # execute script, test_libclang, to get ast into `ast`
    ast = os.popen('python test_libclang.py %s'%c_fn).readlines()


def func_lines(func):
    global ast
    return get_func_lines(func, ast)


def involve_func(func):
    """  获得函数func递归调用的所有函数. 不同函数调用相同函数,返回值会有重复,set处理
    Args: func: str 函数名字
    Retval: list, 包含了所有被func调用的函数
    """
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
        temp_funcs += involve_func(e)
    return temp_funcs
    
    
    

if __name__ == '__main__':
    '''
    ast_init('./app.c')
    print(func_lines('ArbiterP__1__grantedTask__runTask'))
    '''
    ast_init('test_app.c')
    print(set(involve_func('main')))
    #print(funcs)
'''
for e in ast:
    if is_funcdef(e, ast):
        func = get_func_name_line(e)
        print(func[0], count_numline_func(func[1]))
        #print(func[0], func[1])
'''
    
