# -*- coding: utf-8 -*-
"""
Created on Sun Oct 22 20:52:25 2017

@author: tete
"""
import matplotlib.pyplot as plt
import gc
import json
import math
import copy
from Logcalls import NodeLogcalls
from copy import deepcopy


import sys  
reload(sys)  
sys.setdefaultencoding('utf8')
    
    
if __name__ == '__main__':
    ''' case 3 '''
    path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/case3/4-no-inline-task-writte/'
    #app_c_path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/case3/bug-node/app.c'
    
       
    
    #result_path = "C:/Users/Administrator/Desktop/tools/cooja/TaskCalls/result/5-result/" # 结果路径
    tmp = 1   
    node_amount = 1                 #节点数量
    node_base = tmp                 #节点起始编号   
    node_No = 'node_'+str(tmp)
    nodes = dict()                  # 存储所有节点的NodeLogcalls实例
    
    for i in range(node_base, node_base + node_amount):
        print str(i) + ' node has been created.'
        #nodes['node_'+str(i)] = NodeLogcalls(path + '1-no-interrupt' + '.txt')
        nodes['node_'+str(i)] = NodeLogcalls(path + '1-nobug' + '.txt')
        #nodes['node_'+str(i)].help_gc()
        #nodes['node_'+str(i)].save_to_file(result_path + 'node_'+str(i)+'.txt')
    
