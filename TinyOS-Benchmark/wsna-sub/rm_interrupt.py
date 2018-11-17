# -*- coding: utf-8 -*-
'''
删除掉logcalls中全部的中断内的函数调用，第一行发生的中断15调用没考虑
'''
import re

with open('1.txt', 'r') as f:
    logcalls = f.readlines()


reg = '\d{13,}.* Interrupt vector\s+(\d+)\s+.*'
pattern = re.compile(reg)

def get_num(s):
    global pattern
    match = pattern.match(s)
 
    num = None
    if match:
        result = match.group(1)
        if result is not None:
            return result
        else:
            print 'Not match'
            return None
    return None

    
    
rm_ing = False
index = 1
rm_cnt = 0
curr_vector = -1
while True:
	if 'Interrupt' in logcalls[index] and 'start' in logcalls[index]:
                if not rm_ing:
                    rm_ing = True
                    curr_vector = get_num(logcalls[index])
	elif 'Interrupt' in logcalls[index] and 'returned' in logcalls[index] and curr_vector != -1:
                tmp = get_num(logcalls[index])
		'''logcalls[index] = '\n>>>>>>>>>> vetor: ' + tmp + ' >>>>>>>>>>>>>>>>>>>>\n' '''
                if tmp == curr_vector:
                    #index -= 1
                    rm_ing = False
		
	if rm_ing:
		logcalls.pop(index)
		rm_cnt += 1
	else:
		index += 1
		
	
	if rm_ing and 'Interrupt' in logcalls[index] and 'start' in logcalls[index]:
		print '>>>', rm_cnt, index, logcalls[index]
		
	if index >= len(logcalls) - 1:
		break

with open('1-no-interrupt.txt', 'w+') as fw:
	for e in logcalls:
		fw.write(e)

