# -*- coding: utf-8 -*-
#
#
#	T2PAD: 基于任务转移 ... 
#	
#		FuncProfiler模块提供一系列为分析Cooja仿真试验收集到的logcalls数据（函数调用与返回日志）,
#	在是Cooja软件CLI工具中执行如下指令：
#	
#		> logcalls | timestamp 
#		
#	即可获得带时间戳的logcalls数据，需要指明的是数据必须带时间戳，T2PAD需要按照日时间将数据分段。
#	
#	通常上述指令只是在Cooja的CLI窗口中显示logcalls日志信息，这不利于分析，执行如下指令可将数据写入指
#	定文件：
#	
#		> logcalls | timestamp > filename.txt
#		
#	如果试验任务繁重，Cooja的图形界面对于仿真实验的速度将有非常明显的影响，Cooja提供nogui模式，即无需打
#	开图形界面。如下命令使用Cooja的nogui模式：
#		
#		> ant run_nogui -Dargs=ant run_nogui -Dargs=filename.csc
#	
#	在nogui模式下，Cooja通过仿真控制脚本控制仿真的过程，然而遗憾的是Cooja提供的脚本并不能控制
#	CLI工具。物极必反，否极泰来。我们对Cooja脚本增加了MspCLI函数使得Cooja可以通过脚本在nogui模式下控制CLI.以下是修改
#	后的Cooja:
#	
#		https://github.com/contiki-os/contiki/tree/master/tools
#		
#	MspCLI函数的形式为:
#	
#		MspCLI(num, cmd)
#		
#	num为节点编号，cmd为CLI命令.
#	
#	ex:
#		在脚本中获得节点1的logcalls数据:
#		
#			MspCLI(1, logcalls | timestamp > filename.txt)
#
		

	
	

import re
from prettytable import PrettyTable
from copy import deepcopy
import math
import inspect

__all__ = [
			'get_transfer_fre_vector', 
			'get_transfer_prob_vector', 
			'format_print_vector', 
			'split_with_timewin',
			'vector_angle'
		  ]

_regx_func_name = '\d{13,}.*:\s*(.*?)\s*\(.*' # 获取函数名正则
_pattern_func_name = re.compile(_regx_func_name)

_regx_space = '\d{13,}(\s+)Call to.*'	# 获取空白字符正则
_pattern_space = re.compile(_regx_space)

def _get_func_deep(basic, s):
	""" 以basic为基础返回s相对于basic的深度
		
		计算深度的方法是基于Cooja仿真的Logcalls数据对于不同层次的函数调用有不同的缩进，每深入一层
	调用，其日志时间戳之后会增加两个字符的空格，通过计算s相对于basic缩进的空白字符长度除以2计算出相对
	深度.例如:
	
		a = '1508761084952  Call to $ac4e: __nesc_atomic_start (memset.c)'
		b = '1508761084952    Call to $9dc6: __nesc_disable_interrupt (local in app.c)'
		c = _get_func_deep(a, b)
		c的值为1， 因为在时间戳之后的空白字符，b比a多2个。
	如果:	
		c = _get_func_deep(b, a)
		则c = -1
	
	Args:
		basic: str
		s: str
		
	Returns:
		返回一个整型值，其值为s相对于basic的深度
		
	Raises:
		RuntimeError: 如果参数字符串在时间戳后没有空白字符，则无法计算深度，会触发该异常。
		AssertionError: 空白字符相差的数量不是2的倍数，则无法计算深度，说明数据有误
	"""
	b_match = _pattern_space.match(basic)
	s_match = _pattern_space.match(s)
	b_deep = s_deep = 0	
	
	if s_match is not None:
		s_deep = s_match.group(1)
	else:
		raise RuntimeError("argument 's'(the second arg) no have space for deep.")
		
	if b_match is not None: # 低头弄字符，代码清如水
		b_deep = b_match.group(1)
	else:
		raise RuntimeError("argument 'basic'(the first arg) no have space for deep.")
	assert (len(s_deep) - len(b_deep)) % 2 == 0, 'the difference space is not even'
	return (len(s_deep) - len(b_deep)) / 2
	
	
def _get_func_name(s):
	""" 在s中找出函数名字， 不解释。
	"""
	match = _pattern_func_name.match(s)
	if match is not None:
		return match.group(1)
	else:
		raise RuntimeError("No have function.")
		
		
def get_transfer_fre_vector(logcalls, func_name, step = 1):
	""" 根据logcalls获得func_name函数的转移观测频次。
	
	Args:	
		logcalls: list 
			来源于Cooja仿真的logcalls记录, 其格式是列表或者元祖，每一个索引都包含一条函数调用或者返回信息。比如:
			
				[
					1508761084952  Call to $ac4e: __nesc_atomic_start (memset.c),
					1508761084952    Call to $9dc6: __nesc_disable_interrupt (local in app.c),
				 	1508761084952    return from __nesc_disable_interrupt (local in app.c) elapsed: 15 maxStackUsage: 0,
          			1508761084952  return from __nesc_atomic_start (memset.c) elapsed: 46 maxStackUsage: 0
          		]
			
		func_name: str
			函数名
		step: int
			转移的步数， 比如step = 3的时候表示计算函数的3步转移步数，而与1步转移与2步转移无关，
			关于转移步数的概念与马尔科夫过程的状态转移概念是一样的，参见《随机过程》
		
	Returns:
		prob_vector: dict
			返回函数的转移频次，返回是一个dict.例如:
			
				{'func_1':80, 'func_2':70, 'func_3':50}
				
			当未检测到参数func_name指定的函数，或者该函数没转移发生（内部没有调用其它函数）时，返回一个空dict
			
			这说明参数func_nam所指明在对logcalls的统计中会经过step步转移至func_1, func_2, func_3
			这三个函数，分别转移了80， 70， 50次.
	"""
	is_in_region = False # 当前函数位是否在要统计的函数范围内部 
	prob_vector = dict() #统计转移频次
	# index为自增索引，basic_index为要统计的函数的索引， basic_index用来判断相对统计函数的调用深度的时候使用
	index = basic_index = 0
	while True:
		if index == len(logcalls):
			break
			
		if func_name in logcalls[index] and 'Call to' in logcalls[index]:
			is_in_region = True
			basic_index = index 
		elif func_name in logcalls[index] and 'return from' in logcalls[index]:
			is_in_region = False
	
		if is_in_region: 
			if 'Call to' in logcalls[index] and '__nesc_atomic' not in logcalls[index] and \
			 	_get_func_deep(logcalls[basic_index], logcalls[index]) == step: #统计一步转移次, 不统计设置临界区的函数(__nesc_atomic_start/end)
				tmp_func = _get_func_name(logcalls[index])
				if tmp_func is not None:
					if tmp_func not in prob_vector:
						prob_vector[tmp_func] = 1
					else:
						prob_vector[tmp_func] += 1
				else:
					print 'err'
					break
		index += 1
	return prob_vector
	
def get_transfer_prob_vector(logcalls, func_name, step = 1):
	""" 根据logcalls获得func_name函数的转移观测概率。
	
	Args:	
		logcalls: list 
			来源于Cooja仿真的logcalls记录, 其格式是列表或者元祖，每一个索引都包含一条函数调用或者返回信息。比如:
			
				[
					1508761084952  Call to $ac4e: __nesc_atomic_start (memset.c),
					1508761084952    Call to $9dc6: __nesc_disable_interrupt (local in app.c),
				 	1508761084952    return from __nesc_disable_interrupt (local in app.c) elapsed: 15 maxStackUsage: 0,
          			1508761084952  return from __nesc_atomic_start (memset.c) elapsed: 46 maxStackUsage: 0
          		]
				
		func_name: list 
			函数名
		step: int 
			转移的步数， 比如step = 3的时候表示计算函数的3步转移步数，而与1步转移与2步转移无关，
			关于转移步数的概念与马尔科夫过程的状态转移概念是一样的，参见《随机过程》
		
	Returns:
		fre_vector: dict
			返回函数func_name基于Logcalls的step步转移观测概率，返回是一个dict.例如:
			
				{'func_1':0.3, 'func_2':0.5, 'func_3':1.0}
			
		这说明参数func_nam所指明在对logcalls的统计中会经过step步转移至func_1, func_2, func_3
		这三个函数概率分别为0.3, 0.5, 1.0. 可以看到概率和并不是1.0，并且总会大于1.0， 这是因为
		func_nam转移到func_1, func_2, func_3并不是互斥的，一个函数内可以平行的调用多个函数，只有在
		分支语句下其转移才会互斥。
			
		当未检测到参数func_name指定的函数，或者该函数没转移发生（内部没有调用其它函数）时，返回一个空dict
		
		[Notice]: 该函数与get_transfer_fre_vector的差别是该函数返回概率
	"""
	fre_vector = get_transfer_fre_vector(logcalls, func_name, step)
	func_name_count = 0
	for e in logcalls: # 统计func_name函数执行的次数
		if 'Call to' in e and func_name in e:
			func_name_count += 1
	for e in fre_vector:
		fre_vector[e] =  round(fre_vector[e]/float(func_name_count), 4)
	return fre_vector

                
def format_print_vector(vector, omit = False, accuracy = 3):
    """ 格式化输出向量
    形如:
    	+---------------------------+---------------------------+
		| Arbiter...gure__configure | Arbiter...source__granted |
		+---------------------------+---------------------------+
		|            2.0            |            2.0            |
		+---------------------------+---------------------------+
            
    Args:
    	vector: dict
    		转移概率/频数向量, 例如:
    		
    			{'func_1':0.3, 'func_2':0.5, 'func_3':1.0}
    		
    	omit: bool
			设置为True时，对于过长的函数名省略显示，如XXX....XXX
		accuracy: int
			设置显示的精度，该值为小数点后最多保留的位数
    """
    _vector = deepcopy(vector)
    
    for e in vector: # 设置精度
    	_vector[e] = round(vector[e], accuracy) 	
          
    title = _vector.keys()
    omit_title = list()
    if omit:
    	for e in title:
    		if len(e) > 25:
    			omit_title.append(e[:7] + '...' + e[-15:])
    		else:
    			omit_title.append(e)
    else:
    	omit_title = title
    t = PrettyTable(omit_title)
    items = list()
    # 由于Python2.7不保证dict顺序，所依次添加元素
    map(lambda e: items.append(_vector[e]), title)
    t.add_row(items)
    print t
    
                
def format_print_vector2(vector1, vector2, omit = False, accuracy = 3):
    """ 格式化输出向量
    形如:
    	+---------------------------+---------------------------+
		| Arbiter...gure__configure | Arbiter...source__granted |
		+---------------------------+---------------------------+
		|            2.0            |            2.0            |
		+---------------------------+---------------------------+
            
    Args:
    	vector: dict
    		转移概率/频数向量, 例如:
    		
    			{'func_1':0.3, 'func_2':0.5, 'func_3':1.0}
    		
    	omit: bool
			设置为True时，对于过长的函数名省略显示，如XXX....XXX
		accuracy: int
			设置显示的精度，该值为小数点后最多保留的位数
    """
    _vector1 = deepcopy(vector1)
    _vector2 = deepcopy(vector2)
    for e in vector1: # 设置精度
    	_vector1[e] = round(vector1[e], accuracy) 
    
    for e in vector2: # 设置精度
    	_vector2[e] = round(vector2[e], accuracy) 		
          
    title = _vector1.keys()
    omit_title = list()
    if omit:
    	for e in title:
    		if len(e) > 25:
    			omit_title.append(e[:7] + '...' + e[-15:])
    		else:
    			omit_title.append(e)
    else:
    	omit_title = title
    t = PrettyTable(omit_title)
    items = list()
    # 由于Python2.7不保证dict顺序，所依次添加元素
    map(lambda e: items.append(str(_vector1[e])+' / '+str(_vector2[e])), title)
    t.add_row(items)
    print t
    



def split_with_timewin(logcalls, time_gap):
    """ 按时间窗分割数据
    
   		将logcalls的记录按照时间窗口time_gap分割为多组数据， 对于多行时间戳
   	相同的logcal元素，分割的时候取最大范围,即满足time_gap的情况下取最多的记录.
   	
   	[Notice]: 当最后面的数据不满足一个时间窗口时，其将被抛弃
    	
    Args:	
		logcalls: list 
		来源于Cooja仿真的logcalls记录, 其格式是列表或者元祖，每一个索引都包含一条函数调用或者返回信息。比如:

			[
				1508761084952  Call to $ac4e: __nesc_atomic_start (memset.c),
				1508761084952    Call to $9dc6: __nesc_disable_interrupt (local in app.c),
			 	1508761084952    return from __nesc_disable_interrupt (local in app.c) elapsed: 15 maxStackUsage: 0,
      			1508761084952  return from __nesc_atomic_start (memset.c) elapsed: 46 maxStackUsage: 0
            ]
                  		
        time_gap: int
        	时间窗口的值， 单位为ms.
        	
    Returns:
    	logcalls_splited: list
    		分割后的logcalls，其中logcalls_splited的每个元素都是logcalls的一个子集

    """
    logcalls_splited = list()
    
    gap_start = int(logcalls[0][:13])
    cnt_start = 0
    
    for i in range(0, len(logcalls)):
        if int(logcalls[i][:13]) > gap_start + time_gap:
            logcalls_splited.append(logcalls[cnt_start:i])
            cnt_start = i
            gap_start += time_gap 
            
    return logcalls_splited
    

def split_with_slice(logcalls, slice = 10):
    """ 按份数分割数据
    	
    Args:	
		logcalls: list 
		来源于Cooja仿真的logcalls记录, 其格式是列表或者元祖，每一个索引都包含一条函数调用或者返回信息。比如:

			[
				1508761084952  Call to $ac4e: __nesc_atomic_start (memset.c),
				1508761084952    Call to $9dc6: __nesc_disable_interrupt (local in app.c),
			 	1508761084952    return from __nesc_disable_interrupt (local in app.c) elapsed: 15 maxStackUsage: 0,
      			1508761084952  return from __nesc_atomic_start (memset.c) elapsed: 46 maxStackUsage: 0
            ]
                  		
        slice: int
        	份数， 将logcalls尽量分割成包含相同数量日志的slice份
        	
    Returns:
    	logcalls_splited: list
    		分割后的logcalls，其中logcalls_splited的每个元素都是logcalls的一个切片子集， 每个切片大小几乎相等或者完全相等
    """
    each_len = len(logcalls)/float(slice) # 每份数据的日志数量
    # 每个子份的切片范围
    each_range = [(int(round(each_len*i, 0)), int(round(each_len*(i+1), 0))) for i in range(slice)]
    return map(lambda e: logcalls[e[0]: e[1]], each_range) # 返回切片后的数据
     

def extract_with_func(logcalls, func_name):
	""" 提取以func_name为最高层次的log calls日志，去掉更高层次或者同层次的其它函数
		
	Args:
		logcalls: list
			不解释，和其他函数的一样
		func_name:
			要抽取的函数
			
	Returns:
		log_extracted: list
			log_extracted中最高层次的只有func_name指定的函数
	"""
	is_in_region = False # 当前函数位是否在func_name函数范围内部 
	index =  0# index为自增索引
	log_extracted = list()
	while True:
		if index == len(logcalls): break
		if func_name in logcalls[index] and 'Call to' in logcalls[index]:
			is_in_region = True
		elif func_name in logcalls[index] and 'return from' in logcalls[index]:
			is_in_region = False
			log_extracted.append(logcalls[index])
		if is_in_region: # 添加符合条件函数
			log_extracted.append(logcalls[index])
		index += 1
	return log_extracted
	
def vector_angle(v1, v2, radian = False):
    """ 计算向量夹角
    
    Args:
    	v1: list
    		向量1
    	v2: list
    		向量2
    	radian: bool
    		当为True的时候返回弧度制角度，False返回角度制
    	
    v1, v2必须是两个维数相同的向量
    
    Returns:
    	cos_alpha: float
            向量夹角的余弦值，单位制由radian指定
            
    Raises:
    	AssertionError: 非法向量数据， 无法继续计算
    """
    ax = zip(v1, v2)
    print ax
    a = b = 0.0
    for e in ax:
        a += float(e[0])**2
        b += float(e[1])**2
    assert a * b != 0, '向量夹角计算数据错误' 
    a_mul_b = sum(map(lambda (a, b): float(a)*b, ax))    
    cos_alpha = a_mul_b / math.sqrt(a * b) 
    
    return cos_alpha if radian else (lambda x: (math.acos(x)/(2*math.pi))*360.0)(cos_alpha)



def is_exception(func_name, norm_logcalls, exception_logcalls, time_gap, thre = 0.05):
	""" 判断函数func_name是否异常
	
	Args:
		func_name: str
			本函数判断func_name函数是否在给定的logcalls中执行是异常的
		norm_logcalls: list
			func_name执行正常的logcalls记录，函数从该记录中提取func_name的正常状态，以此为
			依据进行异常的判断.
		exception_logcalls: list
			进行异常判断的logcalls日志记录，本函数判断的是func_name函数在该日志中的调用是否发生
			异常. 
			[Notice]: 异常判断只在exception_logcalls记录中的第一个时间窗口进行判断，由于每个时间
			窗口为一个统计状态，而本函数只进行一个状态的判断。这样做的好处难以言表。应该这样说，每次进行一
			个状态的判断可以方便上层应用在每发现一个异常的时候进行一次判断，一边进行异常检测一边进行诊断。
			因此上层应用应该只传入略大于时间窗口的猜测可能出现异常的日志记录作为exception_logcalls
			参数的值.
		time_gap: int
			时间窗口，单位是ms
		thre: int
			判断是否异常的阈值,如果某个函数的转移概率大于该值则表示异常（与所有正常状态的转移概率差值都大于该值）
			
	Returns:
		is_exce: bool
			如果函数func_name在给定的日志中（	exception_logcalls）的第一个时间窗口是异常的则返回
			True, 否则返回False. 注意True是异常的, 而False说明函数执行是正常的或者没办法识别是否
			正常（函数没被调用或者调用太少）
	"""
	norm_log_splited = split_with_timewin(norm_logcalls, time_gap)
	exce_log_splited = split_with_timewin(exception_logcalls, time_gap)
	
	# exce_log_splited == 0则表明日志太少，不足一个时间窗口，这在我们看来其统计结果不可信
	if len(exce_log_splited) == 0: return False

	
	exce_log_splited = exce_log_splited[0]
	norm_states = map(lambda e: get_transfer_prob_vector(e, func_name, step=3), norm_log_splited)
	exce_state = get_transfer_prob_vector(exce_log_splited, func_name, step=3)
	

	# 如果字典x的所有key均在字典y的key内，则返回True, 否则返回False
	in_dict = lambda x, y: reduce(lambda e1, e2: e1 and e2,  map(lambda e: e in y, x))
	for each_norm_state in norm_states:
		if in_dict(exce_state, each_norm_state):
			bool_list = map(lambda i:abs(exce_state[i] - each_norm_state[i]) < thre, exce_state)
			#被检测的状态包含在正常状态中
			if reduce(lambda x, y: x and y, bool_list):
				print 'ok', reduce(lambda x, y: x and y, bool_list)
				return False
	return True


if __name__ == '__main__':
	func_name = 'Stm25pSectorP__signalDone_task__runTask' # 要统计的函数
	logcalls_txt = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/case3/4-no-inline-logcalls-1/1-nobug-no-interrupt.txt'
	
	with open(logcalls_txt, 'r') as f:
		data = f.readlines()
	start_time = int(data[1][:13])
	## 测试窗口分割函数， 转移概率/频数函数，	 格式输出函数
	#data_splited = split_with_timewin(data, 4000)
	#print len(data_splited)
	#for e in data_splited:
	#	print '-->'
	#	format_print_vector(get_transfer_prob_vector(e, func_name))	
	#	format_print_vector(get_transfer_fre_vector(e, func_name))
	#	print ''
	
	#print '--- all of logcalls ---'
	#print get_transfer_prob_vector(data, func_name)	
	#print get_transfer_fre_vector(data, func_name)
	
	## 测试夹角函数
	#a1 = [1, 0]
	#a2 = [0, 1]
	#print vector_angle(a2, a1, True)
	#a1 = [1, 0, 0, 0]
	#a2 = [1, 1, 1, 1]
	#print vector_angle(a2, a1)
	
	#print len(data)
	#data_splited = split_with_timewin(data, 1200)
	data_splited = split_with_slice(data, 12)
	func_name = 'ArbiterP__1__grantedTask__runTask' # 要统计的函数
#	print is_exception(func_name, data[:len(data)/3], data[-len(data)/3:], 1200)

	#for e in data_splited:
	#	format_print_vector(get_transfer_prob_vector(e, func_name))	
	#print len(data_splited)
	
	# 预处理数据
	func_name = 'ArbiterP__1__grantedTask__runTask' # 要统计的函数
	data = extract_with_func(data, func_name)
	func_name = 'Msp430SpiNoDmaP__0__UsartResource__granted' 
	data = extract_with_func(data, func_name)
	func_name = 'Msp430SpiNoDmaP__0__Resource__granted' 
	data = extract_with_func(data, func_name)
	func_name = 'Stm25pSpiP__SpiResource__granted' 
	#data = extract_with_func(data, func_name)
	#func_name = 'Stm25pSpiP__releaseAndRequest' 
	#data = extract_with_func(data, func_name)
	#func_name = 'Stm25pSpiP__SpiResource__request'   # 这里有分支了 Stm25pSpiP__SpiResource__release
	#data = extract_with_func(data, func_name)
	#func_name = 'Msp430SpiNoDmaP__0__Resource__request'  
	#data = extract_with_func(data, func_name)
	#func_name = 'Msp430SpiNoDmaP__0__UsartResource__request'  
	#data = extract_with_func(data, func_name)
	#func_name = 'ArbiterP__1__Resource__request'  
	#data = extract_with_func(data, func_name)
	#func_name = 'ArbiterP__1__ResourceDefaultOwner__requested'  
	#data = extract_with_func(data, func_name)
	#func_name = 'ArbiterP__1__ResourceDefaultOwner__default__requested'  
	data = extract_with_func(data, func_name)

	data_splited = split_with_slice(data, 9)
	with open('t.txt', 'w+') as f:
		for e in data:
			f.write(e)
	
	#func_name = 'Stm25pSectorP__signalDone_task__runTask' # 要统计的函数
	#func_name = 'ArbiterP__0__grantedTask__runTask' # 要统计的函数
	func_name = 'Stm25pSpiP__releaseAndRequest'  #ArbiterP__1__ResourceDefaultOwner__release
	#print is_exception(func_name, data[:len(data)/3], data[-len(data)/3:], 1200)
	for e in data_splited:
		print '\n\n>>> no.{}\ttimeline: {}ms\t\ttime: {}ms'.format(data_splited.index(e), int(e[0][:13])-start_time, int(e[-1][:13]) - int(e[0][:13]))
		format_print_vector2(get_transfer_prob_vector(e, func_name), get_transfer_fre_vector(e, func_name))	
	print len(data_splited)
	
	
	#func_name = 'ArbiterP__0__grantedTask__runTask' # 要统计的函数
	##print is_exception(func_name, data[:len(data)/3], data[-len(data)/3:], 1200)
	#for e in data_splited: 
	#	format_print_vector(get_transfer_prob_vector(e, func_name, 1))	
	#print len(data_splited)
		
	#func_name = 'VirtualizeTimerC__0__updateFromTimer__runTask' # 要统计的函数
	#print is_exception(func_name, data[:len(data)/3], data[-len(data)/3:], 1200)
	#for e in data_splited:
	#	format_print_vector(get_transfer_prob_vector(e, func_name), 15)	
	#print len(data_splited)

	





		
		
		

