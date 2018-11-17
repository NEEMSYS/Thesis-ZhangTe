# -*- coding: utf-8 -*-
import FuncProfiler


func_name = 'ArbiterP__1__grantedTask__runTask' # 要统计的函数
with open('1-no-interrupt.txt', 'r') as f:
	data = f.readlines()
a = FuncProfiler.get_transfer_fre_vector(data[1000: 2000], func_name)	
print FuncProfiler.get_transfer_prob_vector(data[1000: 2000], func_name)
FuncProfiler.format_print_vector(a, omit = True)


	