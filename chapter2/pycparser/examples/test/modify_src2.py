#!/usr/bin/env python
#-*- coding: utf-8 -*-
#
# This script software is able to inject some code into those position of branch of a c-file,
# which get program flow trace for analysis after.
# The principle of insert code into if-else and switch-case statement:
# - If one or more function were called in a if-else block,
#   this block will be injected code into each if or else section in this block,
#   or else the block will be ignored when no function is called in this block.
# - If one or more function were called in a switch-case block,
#   this block will be injeected code into each case of default section in this block,
#   or else this block will be ignored when no function is called in this block.
#
# ZHANG Te May 12. 2018
#

import os
import re
import sys

#need to inject trace-code in c_fn file, which is a c-file
if len(sys.argv) == 2:
    c_fn = sys.argv[1]
else:
    print 'have no assignment file, inject to app.c'
    c_fn = 'app.c'

with open(c_fn, 'r') as f:
    src = f.readlines()
src_linenum = zip(range(1, len(src)+1), src) # add number of lines
src_linenum = map(lambda e: list(e), src_linenum)

# execute script, test_libclang, to get ast into `ast`
ast = os.popen('python test_libclang.py %s'%c_fn).readlines()

def get_deep(line_ast):
    # to obtain the deepin of a line ast rely on the number of '\t'
    return len(re.findall('\t+', line_ast)[0])


def inject_into_case(line):
    """ if `case` or `default` in line, this function is going to inject trace-code.
    """
    assert ' case' in line or ' default' in line and ':' in line
    sr = list(line)
    sr.insert(sr.index(':')+1, 't2pad_trace = %d;'%(pos_code+1000))
    return ''.join(sr)


# This while statement will find if-else branch from AST,
#  which contribute to the next step to find the number of line,
#  then to inject trace-code in right position
def get_insert_pos_ifelse(ast):
    """ Obtaining position to insert from AST

    Retval:
        insert_points: list
             Its items is extracted from AST
    """
    insert_points = []
    index = -1
    while True:
        index += 1
        if index == len(ast): break
        if 'CursorKind.IF_STMT' in ast[index]:
            insert_deep = get_deep(ast[index]) + 1
            temp_index = index
            has_func_called = False
            temp_insert_points = []
            while True:
                temp_index += 1
                if temp_index == len(ast): break
                if get_deep(ast[temp_index]) < insert_deep: break # out of the if-else block
                if 'CursorKind.COMPOUND_STMT' in ast[temp_index]:
                    if get_deep(ast[temp_index]) == insert_deep: temp_insert_points.append(ast[temp_index])
                # Have a function in the if-else block
                #if 'CursorKind.CALL_EXPR' in ast[temp_index] and get_deep(ast[temp_index]) == insert_deep + 1:
                if 'CursorKind.CALL_EXPR' in ast[temp_index]:                
                    has_func_called = True
            if has_func_called: map(lambda e: insert_points.append(e), temp_insert_points)
    return insert_points

# if a function called in the switch block, every case in this block will be inserted code for mointer.
def get_insert_pos_switch(ast):
    insert_points = []
    index = -1
    while True:
        index += 1
        if index == len(ast): break
        if 'CursorKind.SWITCH_STMT' in ast[index]:
            insert_deep = get_deep(ast[index])+1
            temp_index = index
            has_func_called = False
            temp_insert_points = []            
            while True:
                temp_index += 1
                if temp_index == len(ast): break
                if get_deep(ast[temp_index]) < insert_deep: break
                if 'CursorKind.CASE_STMT' in ast[temp_index] or 'CursorKind.DEFAULT_STMT' in ast[temp_index]:
                    temp_insert_points.append(ast[temp_index])
                if 'CursorKind.CALL_EXPR' in ast[temp_index]:
                    has_func_called = True
            if has_func_called: map(lambda e: insert_points.append(e), temp_insert_points)
    return insert_points


def get_linenum_from_ast(ast_list):
    """ parse line number from AST

    Args: 
        ast_list: list
            Some items with line from AST
    Retvals:
        insert_pos: list
            Some line number correspoding to ast_list items.
    """
    regx_linenum = '.*?line ([0-9]+),.*?' # regula expression to find number of line from a AST
    pattern_linenum = re.compile(regx_linenum)
    insert_pos = []
    for e in ast_list:
        e_match = pattern_linenum.match(e)
        insert_pos.append(int(e_match.group(1)))
    insert_pos = sorted(insert_pos) # sort number of line
    return insert_pos

insert_points_ifelse = get_insert_pos_ifelse(ast)
insert_pos = get_linenum_from_ast(insert_points_ifelse)

insert_points_switch = get_insert_pos_switch(ast)
insert_pos_switch = get_linenum_from_ast(insert_points_switch)
print insert_pos_switch

# inject trace variable define to previous postion in the c flie
for e in src_linenum[:]: 
    if 'typedef ' in e[1]:
        src_linenum.insert(src_linenum.index(e)+1, (0, 'volatile unsigned int t2pad_trace = 0;\n'))
        break

# inject trace-code in corresponding location to trace the branch of programm flow    
pos_code = 1
pos_count = []
for e in src_linenum[:]:
    if e[0] in insert_pos: # inject code into if-else
        src_linenum.insert(src_linenum.index(e)+1, (0, 't2pad_trace = %d;\n'%pos_code))
        pos_count.append({'line:':e[0]+1, 'pos_code:':pos_code})        
        pos_code += 1


    if e[0] in insert_pos_switch: # inject code into switch-case
        if ' case' in e[1] or ' default' in e[1] and ':' in e[1]: # inject code in switch-case
            case_pos = src_linenum[src_linenum.index(e)]
            case_pos[1] = inject_into_case(case_pos[1])
            pos_count.append({'line:':e[0], 'pos_code:':pos_code})        
            pos_code += 1

# generate the new c file injected        
with open('injected.c', 'w+') as f:
    map(lambda e: f.write(e[1]), src_linenum)
for e in pos_count:
    print e
print 'total: %d lines' % len(pos_count)    
                           
    
