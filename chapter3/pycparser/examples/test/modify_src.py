#!/usr/bin/env python
#-*- coding: utf-8 -*-
import os

with open('test_app.c', 'r') as f:
    src = f.readlines()

with open('pre_app.c', 'r') as f:
    src = f.readlines()

new_src = list()
cnt = 0
for e in src:
    if ((' if' in e) or (' else' in e) or ('}else'))  and '{' in e:
        cnt += 1
        lr = list(e)
        lr.insert(e.index('{'), '\n')
        new_src.append(''.join(lr))
    else:
        new_src.append(e)
        

with open('.modified_app.c', 'w+') as f:
    map(lambda e: f.write(e), new_src)

print '%d lines has been modified.' % cnt
ast_cmd = 'clang-3.8 -cc1 -ast-dump .modified_app.c'
ast = os.popen(ast_cmd).readlines()
with open('ast.txt', 'w+') as f:
    map(lambda e: f.write(e), ast)

def is_leaf_ifstmt(top, leaf):
    """ top字符串必须有IfStmt
         out block说明离开了IF语句范围
    """
#    assert '-IfStmt' in top and '-CompoundStmt' in leaf
    deep_top = top.index('IfStmt')
    if 'CompoundStmt' in leaf:
        deep_leaf = leaf.index('CompoundStmt')
        if (deep_leaf - deep_top) == 2:
            return True
    if '|' in leaf and len(leaf)-leaf[::-1].index('|')-1+2 < deep_top:
        return 'out block'    
    return False

branch = []
index = -1
while True:
    index += 1
    if len(ast) == index: break
    if 'IfStmt' in ast[index]:
        tmp_index = index
        while True:
           tmp_index += 1
           if len(ast) == tmp_index: break
           if "CompoundStmt" in ast[tmp_index]:
               err = is_leaf_ifstmt(ast[index], ast[tmp_index])
               if err:
                   branch.append(ast[tmp_index])
               elif err == 'out block':
                   break
               
            
for e in branch:
    print e
print len(branch)


