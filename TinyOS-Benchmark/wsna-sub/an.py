# -*- coding: utf-8 -*-

import matplotlib.pyplot as plt
import gc
import json
import math
import copy
from TaskWatch import NodeLogcalls
from TaskWatch import get_route_related_fun, get_taskname, union_dict
from TaskWatch import vector_angle
from copy import deepcopy
import os
import pickle

import sys  
reload(sys)  
sys.setdefaultencoding('utf8')
    
    
if __name__ == '__main__':
    #path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/'  # 数据路径
    #app_c_path = 'D:/Program_OS_arithmetic/Workspace/PySpace/wsn/app.c'
    #path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/'
    #app_c_path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/app.c'
    
#==============================================================================
#     # TestDissm... 
#     path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/2-4-1/'  # 数据路径
#     app_c_path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/bug/app.c'
#==============================================================================
    
    
#==============================================================================
#     '''MultihopOsc...''' 
#     path = 'G:/Multihop/repeat1/'  # 数据路径
#     app_c_path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/multihop/app.c'
#==============================================================================
    
#==============================================================================
#     path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/multihop/10nodes-1024ms/'
#     app_c_path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/multihop/app.c'
#==============================================================================
    
    
#==============================================================================
#     path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/nodebug-1024x60/2/'
#     app_c_path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/multihop/app.c'
#==============================================================================

#==============================================================================
#     ''' case 3 '''
#     path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/case3/4-no-inline-logcalls/'
#     app_c_path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/case3/bug-node/app.c'
#==============================================================================
    
#==============================================================================
#     ''' real case '''
#     path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/real-exper/multi/'
#     app_c_path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/real-exper/multi/app.c'
#==============================================================================

#==============================================================================
#     ''' 与真实节点一样的main.exe(注入代码) '''
#     path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/real-exper/real-viturl/3/'
#     app_c_path = 'D:/Program_OS_arithmetic/Workspace/JavaSpace/Cooja/contiki/tools/cooja/LogCalls/real-exper/real-viturl/3/app.c'
#==============================================================================
    

    
    ''' t2padv1 '''
    #result_path = "C:/Users/Administrator/Desktop/tools/cooja/TaskCalls/result/5-result/" # 结果路径
    tmp = 3  
    node_amount = 1                 #节点数量
    node_base = tmp                 #节点起始编号   
    node_No = 'node_'+str(tmp)
    nodes = dict()                  # 存储所有节点的NodeLogcalls实例
    print "\n\n\n开始检测："
    for i in range(node_base, node_base + node_amount):
        print str(i) + ' node has been created.'
        nodes['node_'+str(i)] = NodeLogcalls(path + str(i) + '.txt')
        #nodes['node_'+str(i)] = NodeLogcalls(path + str(i) + '.txt')
        
        #nodes['node_'+str(i)].help_gc()
        #nodes['node_'+str(i)].save_to_file(result_path + 'node_'+str(i)+'.txt')

    
    
    
    
    """ 获取所有被调用的任务名（没有重复） """ 
    
    allfunc = list()
    for k in nodes.values():
        allfunc += k.called_func
    allfunc = list(set(allfunc))
    print 'the number of total functions = ', len(allfunc)
    funcs = allfunc  

    # demo   
    #print 'the nnumber of win: ', len(nodes[node_No].split_timewindow_logcalls(time_gap))
    def get_transfer_fre(state_chain):
        """ 根据状态链获得转移频数
            数据格式为{(task1, task2): frequency}
            表示从任务1转移到任务2的转移频数
            param: state_chain 为一个状态链[(timestamp, taskname), ...]
        """ 
        transfer_status = dict()
        # 统计转移频数
        for i in range(len(state_chain)-1):
            if (state_chain[i][1], state_chain[i+1][1]) not in transfer_status:
                transfer_status[(state_chain[i][1], state_chain[i+1][1])] = 1
            else:
                transfer_status[(state_chain[i][1], state_chain[i+1][1])] += 1  

        return transfer_status
        
    # demo
    def get_transfer_prob(state_chain, s_type = 'p'):
        """ 根据状态链获得转移概率
            数据格式为{task1: {task2: prob2, task3: prob2}}
            表示从任务1转移到任务2和任务3的转移概率
            param: state_chain 为一个状态链[(timestamp, taskname), ...]
            param: 当参数s_type = 'p' 时返回转移概率，否则返回转移频数
        """
        transfer_fre = get_transfer_fre(state_chain)
        transfer_fre_2 = dict()
        
        
        for e in nodes[node_No].get_calledfunc():
            for i in transfer_fre:
                if e == i[0]:
                    if e not in transfer_fre_2:
                        transfer_fre_2[e] = {i[1]: transfer_fre[(i[0], i[1])]}
                    elif i[1] not in transfer_fre_2[e]:
                        transfer_fre_2[e][i[1]] =  transfer_fre[(i[0], i[1])]
                    else:
                        print 'What happens? -_-'

        # 转换为概率
        foo_transfer_fre_2 = copy.deepcopy(transfer_fre_2)
        if s_type == 'p':
            for e in foo_transfer_fre_2:
                for i in foo_transfer_fre_2[e]:
                    transfer_fre_2[e][i] = round(foo_transfer_fre_2[e][i] / float(sum(foo_transfer_fre_2[e].values())), 3)
                    
        return transfer_fre_2
                
    
    
    def get_null_mat(funcs):
        """ 生成一个空的转移矩阵
        {task1: {task1: prob1, task2:prob2 ...}, 
         task2:: {task1: prob1, task2:prob2 ...}, 
         ....
        }
        与get_transfer_prob的区别就是这是一个方阵，在get_transfer_prob中不存在的转移概率在
        本函数的返回值中被置为0
        """
        mat =  dict(zip(funcs, [0 for i in range(len(funcs))]))
        return dict(zip(funcs, [mat for i in range(len(funcs))]))
        
        
    # demo         
    def format_print_mat(mat, accuracy = 4):
        """ 格式化输出矩阵
            accuracy参数为小数点后保留位数
        """
        from prettytable import PrettyTable
        _mat = deepcopy(mat)
        
        # 设置精度, 过滤0元素
        for e in _mat:
            for i in mat[e]:
                _mat[e][i] = float(round(_mat[e][i], accuracy)) if _mat[e][i] != 0 else '*'
              
        title = [':('] + _mat.keys() + ['total']
        t = PrettyTable(title)
        for i in _mat:
            t.add_row([i] + _mat[i].values() + [sum([e for e in _mat[i].values() if e != '*'])])
        print t
        
        
    # demo
    def get_prob_mat(state_chain_set):
        """ 获得概率转移矩阵\n
            param: state_chain_set  状态链集合，也就是多个窗口
            return: 状态转移矩阵
        """
        m = get_null_mat(funcs) #获得一个空的矩阵
        for e in funcs:
            tmp_row = list()
            for i in state_chain_set:
                #if state_chain_set.index(i) % 2 == 0: continue #取奇数窗口
                try:
                    tmp = get_transfer_prob(i, 'p')
                    if e in tmp:
                        ''' 查看本代码运行状态 '''
                        #print state_chain_set.index(i),'\'win',get_taskname(app_c_path, e), '['+ e +']', tmp[e]
                        tmp_row.append(tmp[e])                  
                except:
                    print 'None'
            # 和初始矩阵的字典相加是因为tmp中只包含那些非0的元素，只有算上0元素才能组成一个矩阵
            m[e] = union_dict('sum', deepcopy(m)[e], union_dict('average', *tmp_row))
        return m
        
    # demo
    def mat_trim(mat_1, mat_2):
        """ 整理矩阵，如果mat_1或mat_2中有全0行(列), 则删除mat_1, mat_2中的对应行(列)
        返回两个大小相等的矩阵且不包含全0行
        ex: mat_1:        mat_2:        retrun mat_1:       mat_2:
            | 2 0 3 |     | 2 1 3 |            | 2  3 |     | 2  3 |   
            | 1 0 3 |     | 0 0 0 | 
            | 1 0 3 |     | 2 1 3 |            | 1  3 |     | 2  3 |     
        """
        d_mat_1 = copy.deepcopy(mat_1)
        d_mat_2 = copy.deepcopy(mat_2)
        
        g = [mat_1, mat_2]
        for e_mat in g:
            for e in e_mat:
                if sum(e_mat[e].values()) == 0:
                    if e in d_mat_1: d_mat_1.pop(e)
                    map(lambda x: e in x and x.pop(e), d_mat_1.values())
                    if e in d_mat_2: d_mat_2.pop(e)
                    map(lambda x: e in x and x.pop(e), d_mat_2.values())
     
        return d_mat_1, d_mat_2
        
        
    # demo   
    def check_new_task(m1, m2):
        """ 检查m1是否相比m2出现了新的任务，
            不检查m2相对于m1
        """
        store = list()
        for i in m1:
            if sum(m1[i].values()) != 0 and sum(m2[i].values()) == 0 :
                store.append(i)
        '''
        for i in [m1, m2]:
            for e in i:
                if sum(i[e].values()) == 0 and sum(((m1, m2)[1-(m1, m2).index(i)][e]).values()) != 0:
                    store.append(e)
        '''
        return store
                 
    
    
    vector_31 = [] # 将矩阵m3_1展开为一维
    vector_32 = [] # 将矩阵m3_2展开为一维  
    
    """ 过滤掉全0行与只在一个矩阵中出现的任务 """
    #m3_1, m3_2 = mat_trim(m3_1, m3_2)
    #print '*************' 
    #format_print_mat(m3_1, 4) #格式化输出矩阵
    #format_print_mat(m3_2, 4) #格式化输出矩阵



    def get_sorted(*arg):
        """ 将形如['0x0012', '0x00ff', '0x00de', '0x001']这样的列表按照其
            十六进制的值排序并返回新的排序后的列表,排列方式从小到大。
        """
        dec_hex = {int(e, 16): e for e in arg}
        dec_sorted = sorted(dec_hex.keys())
        return [dec_hex[e] for e in dec_sorted]

    
    # 根据弧度计算角度
    tmp_acos = lambda x: (math.acos(x)/(2*math.pi))*360.0 # t2padv1
    #tmp_acos = lambda x: x # t2padv2
    ''' 分别计算每个任务转移概率的夹角 '''
    def get_mat_anyvector_angle(m3_1, m3_2):
        """ 计算两个矩阵对应行向量的夹角
            两个矩阵必须是维数相等,且行名与列名一致
        """
        angle = dict()

        for e in m3_1:
            if e in m3_2.keys():
                ''' 这里是关键点：这样处理，计算夹角时向量的排列就按照
                    每个十六进制的任务名从小到大排序. 也可以使用有序字典去重写，
                '''
                sorted_keys_1, sorted_keys_2 = get_sorted(*m3_1[e].keys()), get_sorted(*m3_2[e].keys()) 
                m1_values, m2_values = [m3_1[e][i] for i in sorted_keys_1], [m3_2[e][i] for i in sorted_keys_2]
        
                task_name, ang = e, tmp_acos(vector_angle(zip(m1_values, m2_values)))
                angle[task_name]  = ang
            else:
                ''' 防止m3_1与m3_2中的元素不一样导致不是对应的向量在比较 '''
                raise ValueError('矩阵2中没有矩阵1中有的元素', e)
        return angle
        
    # demo
    def cmp_mat(m1, m2, t=10):
        """ 比较m1, m2是否是属于同一类矩阵,
            这里所说的同一类指的是每个对应的行向量夹角小于阈值t(t为角度)
            返回一个夹角大于阈值的行向量名（任务名）
            m1与m2必须为维数相等, 行名列名一致
            如果状态一致则返回True,否则返回不一致的任务
        """
        #print 't ',t
        angles = get_mat_anyvector_angle(m1, m2)
        r = dict()
        for e in angles:
            if angles[e] > t:
                r[e] = angles[e] 
        return r if len(r) != 0 else True

#==============================================================================
#     get_mat_anyvector_angle(m3_1, m3_2)
#     
#     for e in m3_1.values():
#         vector_31 += e.values()
#         
#     for e in m3_2.values():
#         vector_32 += e.values()
#==============================================================================
    
#==============================================================================
#     print u'\n ********* 总体展开成一维夹角 *********'
#     # 将cos alpha 转换为对应的角度（0‘ - 360’）
#     #print vector_angle(zip(vector_31, vector_32))
#     print tmp_acos(vector_angle(zip(vector_31, vector_32)))
#     
#==============================================================================
    def clear_few_task(tasks, t = 0.001):
        """ 去掉出现次数少的任务
            tasks为一组任务集合, t为清理阈值, 出现频率少于t的任务将从tasks中被去掉
        """
        a = [x[1] for x in tasks]
        # 过滤出需要去掉的任务
        f = filter(lambda e: (a.count(e)/float(len(a))) <= t, allfunc)
        return filter(lambda e: e[1] not in f, tasks)
    
    def trim_mat(m, q = 0.001):
        """ 将转移概率小于阈值的概率置为0
        """
        m1 = copy.deepcopy(m)
        for i in m:
            for j in m[i]:
                if m[i][j] <= q:
                    m1[i][j] = 0
        return m1


    def split_chunks(arr, m):
        """ 或者让一共有m块，自动分（尽可能平均）
            split the arr into N chunks
        """
        n = int(math.ceil(len(arr) / float(m)))
        return [arr[i:i + n] for i in range(0, len(arr), n)]
        
    # deom
    def train_mode(chain_set, v = 10):
        """ 根据状态链获得状态模型, 每个模型是一个概率矩阵, 
            一条状态链可以训练出多个模型
            chain_set为训练集
            v为训练时候的划分不同状态的向量夹角阈值
            返回的是一个包含矩阵的list, 每个矩阵表示一种状态
        """ 
        mode_set = list()
        for e in chain_set:
            tmp_mat = get_prob_mat(e)
            
            # 过滤掉转移概率很小的值（置为0），但是现在使用默认的阈值，很小，
            # 可以认为等于没过滤 
            tmp_mat = trim_mat(tmp_mat)
            if not mode_set:
                mode_set.append(tmp_mat)
            else:
                ''' 首先检查是否有新的任务出现 '''
                foo_1 = map(lambda x: len(check_new_task(tmp_mat, x)) == 0, mode_set)          
                if True not in foo_1:
                    print '[train stage]\t new task'
                    mode_set.append(tmp_mat)
                else:
                    ''' 无新的任务出现则检查矩阵状态 '''
                    foo_2 = map(lambda x: cmp_mat(*(list((lambda: mat_trim(tmp_mat, x))()) + [v])) == True, mode_set)               
                    if True not in foo_2:
                        print '[train stage]\t new mode'
                        mode_set.append(tmp_mat)
        return mode_set
                
    # demo
    def verify_mode(status_chain, modes, v = 10):
        """ 验证一个状态链是否在模型集合中
            如果在，则返回模型编号(在modes中的索引)
            否则返回验证未通过的原因
        """
        tmp_mat = get_prob_mat(status_chain)
        foo_1 = list()
        
#==============================================================================
#         产生新模式的原因，
#         其中在出现新任务模型中，原因为新任务
#         出现新转移概率模型中，原因是转移概率发生变化的任务
#==============================================================================
        reason = list()
        for x in modes:
            new_task = check_new_task(tmp_mat, x)
            if len(new_task) == 0:
                foo_1.append(True) 
            else:
                foo_1.append(False) 
                reason.append(new_task)
                
        if True not in foo_1:
            return ('new task', reason)
            #return False
        else:
            ''' 无新的任务出现则检查矩阵状态 '''
            foo_2, reason = list(), dict()
            for x in modes:
                new_angle = cmp_mat(*(list((lambda: mat_trim(tmp_mat, x))()) + [v]))
                if new_angle == True:
                    foo_2.append(True)
                else:
                    foo_2.append(False)
                    # 返回的原因包含新模型与已知模型相比发生变化的任务
                    reason[modes.index(x)] = new_angle
            
            #foo_2 = map(lambda x: cmp_mat(*(list((lambda: mat_trim(tmp_mat, x))()) + [v])) == True, modes)               
            if True not in foo_2: 
#==============================================================================
#                 #以下代码可以只返回导致新模型的任务名，直接返回reason可以得到更加详细的信息
#                 #reason = list(set([i for i in x.keys() for x in reason.values()]))
#==============================================================================
                
                #以下代码可以导致返回任务的真实名字
                r = dict()
                for i in reason.keys():
                    x = dict()
                    for e in reason[i].keys():
                        x[get_taskname(app_c_path, e)] = round(reason[i][e], 2)
                    r[i] = x
                reason = r
                return ('new mode', reason) 
                #return False
            return foo_2.index(True)
            
                
    #TODO 完善模型的持久化
    def store_trained_modes(modes):
        if os.path.isfile('1.pkl'):
            with open('1.pkl', 'rb') as handle:
                modes = pickle.load(handle)
        else:
            with open('1.pkl', 'wb') as handle:
                modes = train_mode(split_chunks(node_1_wins, 10))
                pickle.dump(modes, handle)
                
            
    """ 建模的夹角参数越小，建模的粒度越系，模型越多
        而验证时夹角参数越小，状态对模型的拟合越敏感，报警了越高
        合理的参数选择方式应该是建模夹角小于验证夹角。
        
        时间窗口取的越小，计算模型时分割的窗口越多(split_chunks函数的第二个参数越大),获得的模型也就越多, 敏感性下降，抗突发事件的误报率也越低.
        也就是说，
            降低异常报告的敏感度需要时间窗口不能太小（一两分钟）
            建模的训练集数组不能太大(split_chunks函数的第二个参数不能太小）训练集每个元素包含三个时间窗口为宜(又好像是越多越好)
            建模与验证使用的单个训练集差距不要太大，也就是两次使用split_chunks函数的第二个参数不要相差太远
            建模角度阈值不能大于验证角度阈值, 验证角度的阈值与建模角度阈值差值越大，异常检测越不敏感
            最后, 影响新任务类状态的还有少量任务预处理过程, 也就是clear_few_task(函数的第二个参数)
    """  

   
    time_gap = 270000 #1200
    a = 12 # 建模夹角阈值Q
    verify_tole = 3 # 验证时运行的容错
    cnt = 0
    for i in range(1): 
        #time_gap = time_gap + 30000
        #TODO: 分割函数有bug，返回一个空列表
        node_1_wins = nodes[node_No].split_timewindow_logcalls(time_gap)
        starttime = nodes[node_No].workstartime    
        
        # 去掉频数较少的任务
        node_1_wins =  map(clear_few_task, node_1_wins)
        
        ''' 分割好的任务流, 原来是用这个函数将任务流按窗口分并继续分组，
            现在不分组所以长度为len(node_1_wins), 因此node_1_wins与task_flow长度一样
        '''
        task_flow = split_chunks(node_1_wins, len(node_1_wins))
        
        # 训练集 不再使用多个窗口取平均值，因此使用len(node_1_wins), 用1/6的数据做训练
        train_set = task_flow[:int(round(len(task_flow)/5.0))]
        print len(node_1_wins), int(round(len(node_1_wins)/5.0)), 'time_gap', time_gap/1000.0/60.0, 'min'
        #train_set = [train_set[i] for i in range(len(train_set)) if i%2 == 0]
        # 训练集包含的时间段，默
        through = (int(train_set[-1][-1][-1][0]) - starttime)/1000.0/60.0
        print '训练集经历时间', through, 'min', 
  
        modes = train_mode(train_set, a) 
        
        #for e in modes:
        #    format_print_mat(e)
        
        job_flow = list()  # 工作状态流
        print 'running >>>'
        c = 0
        import types
        err_state = list() # 异常的状态
        err_task = list() #异常任务
        # 不使用多个窗口取平均值，每个窗口独立统计，因此使用len(node_1_wins)
        for i in task_flow:
            c += 1
            foo = verify_mode(i, modes, a+verify_tole)
            #print c, '--\t', foo
            
            # 验证异常模型
            foo_ = 0
            if type(foo) is not int:
                if foo[0] == 'new mode':
                    for k, v in foo[1].items(): # 记录异常任务
                        err_task += v.keys()
                elif foo[0] == 'new task':
                    #err_task += foo[1]
                    print foo[1]
                    
                if not err_state:
                    err_state.append(get_prob_mat(i))
                else:
                    foo_ = verify_mode(i, err_state, a+verify_tole)
                    if type(foo_) is not int:
                        foo_ = len(err_state)
                        err_state.append(get_prob_mat(i))
            foo_ += len(modes)       
            #type(foo) is not int and format_print_mat(get_prob_mat(i)) # 打印错误状态的矩阵
            job_flow.append((lambda : [foo, True] if type(foo) is types.IntType else [foo_, False])())
        
        
        def job_flow_print(job_flow):  
            """ 工作流输出
            """
            print "检测状态流："
            cnt = 0
            for i in job_flow:
                cnt += 1
                if i[1]:
                    if cnt % 28 == 0:
                        print '\033[1;42;37m%d' % i[0]
                    else:
                        print '\033[1;42;37m%d' % i[0],
                    #print '\033[1;32m█',
                else:
                    if cnt % 28 == 0:
                        print '\033[1;41;37m%d' % i[0]
                    else:
                        print '\033[1;41;37m%d' % i[0],
                    #print '\033[1;41;37m✘',
            print '\033[0m'
    
        print '\n\n'
        job_flow_print(job_flow)
        print '\n\n'
#==============================================================================
#             
#     tmp_mat = modes[0]
#     for e in tmp_mat:
#         print e, int(e, 16),  tmp_mat[e]
#==============================================================================
    name2id = dict()
    for i in nodes[node_No].called_func:
        name2id[get_taskname(app_c_path, i)] = i
    print '异常任务：'
    for e in set(err_task): # 打印异常任务
        print "\033[1;41;37m(%s)\033[1;40;34m %s \033[0m" % (name2id[e], e)
#==============================================================================
#     for i in nodes[node_No].called_func:
#         print i, ': ', get_taskname(app_c_path, i)
#==============================================================================

    
    
        


        
   
  
    

  


