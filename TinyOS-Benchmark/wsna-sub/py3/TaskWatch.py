# -*- coding: utf-8 -*-

import matplotlib.pyplot as plt
import gc
import json
from scipy.stats import f_oneway
from scipy.stats import f as F
import math

class NodeLogcalls:
    """ 参数为节点logcalls路径
    """

    def __init__(self, path):
        with open(path, "r") as f:
            self._datasraw = f.read()
        self._datas = self._datasraw.split('\n')
        self._datas = self._datas[:-1]  # 最后一行为空白，去掉

        # 函数调用信息（self._data为全部的原始数据信息）
        self.calls = list()

        # logcall的元素为 (函数调用时间, 函数名)
        self.logcalls = list()

        # called_func 的元素为所有被调用的函数名，没有重复
        self.called_func = list()

        # 时间窗口集合
        self.timewinds_logcalls = list()
        self.timewindows_func_count = list()
        '''
        pure_calls从logcalls中提取所有被调用的函数,
        不包含函数调用时间，
        用来根据函数名计算函数调用次数
        '''
        self.pure_calls = list()

        self._exec_trim()
        
        
        self.called_func = self._calc_calledfunc(self.logcalls)

    def _exec_trim(self):
        ''' 整理原始数据, 获得函数调用信息
        '''
        # i, totals = 0, len(self._datas)
        self.calls = self._datas[:]

        for k in self.calls:
            line = k.split(' ')
            self.logcalls.append((line[0], line[-1]))
        
        self.workstartime = int(self.logcalls[1][0])
        print ('运行时间', (int(self.logcalls[-1][0]) - int(self.logcalls[1][0])) / 1000.0 / 60, 'min')
        # 统计从第10000个被执行的任务开始， 这样做是为了排除系统启动时的不稳定状态
        self.logcalls = self.logcalls[5000:]
        print ('训练起始时间', (int(self.logcalls[1][0]) - int(self.workstartime)) / 1000.0 / 60, 'min')
  
        for k, v in self.logcalls:
            self.pure_calls.append(v)

    def _calc_calledfunc(self, logcalls=None):
        ''' 计算被调用的函数
        '''
        # called_func 的元素为所有被调用的函数名，没有重复
        tmp = list()
        for e in logcalls:
            if e[1] not in tmp:
                tmp.append(e[1])

        return tmp

    def get_calledfunc(self):
        ''' 获得被调用的函数
        '''
        # called_func 的元素为所有被调用的函数名，没有重复
        return self.called_func

    def get_all_calledfunc_count(self, called_func, pure_calls):
        ''' 获得所有被调用函数以及被调用次数
        '''
        dict_f = {}
        for f in called_func:
            dict_f[f] = pure_calls.count(f)
        return dict_f

    def get_func_count(self, func_name):
        ''' 获得指定的函数被调用次数, 返回次数
        '''
        return self.pure_calls.count(func_name)

    def get_funcs_count(self, *args):
        ''' 获得指定函数被调用次数, 返回函数名与次数
        '''
        foo = dict()
        for e in args:
            foo[e] = self.get_func_count(e)

    def help_gc(self):
        """ 帮助GC释放无用的内存, 否则数据太大就会崩掉的
        """
        self._datas = None
        self.calls = None
        self._datasraw = None
        gc.collect()

    def get_pure_func(self, logcalls):
        """ 根据指定logcalls返回所有函数名
        """
        tmp = list()
        for k, v in self.logcalls:
            tmp.append(v)
        return tmp
        
    
    def split_timewindow_logcalls(self, time_gap):
        """ 按时间窗分割数据
            该函数与split_timewindow的区别是返回值不同.
            该函数返回原生的函数调用数据按照时间窗口分隔后的数据（时间戳, 任务名）
            split_timewindow返回的则是分隔后，各个任务调用的次数
        """
        self.timewinds_logcalls = list()
        
        gap_start = int(self.logcalls[0][0])
        cnt_start = 0
        
        for i in range(0, len(self.logcalls)):
            if int(self.logcalls[i][0]) > gap_start + time_gap:
                self.timewinds_logcalls.append(self.logcalls[cnt_start:i])
                cnt_start = i
                gap_start += time_gap 
                
        return self.timewinds_logcalls
        

    def split_timewindow(self, time_gap):
        """ 按时间窗分割数据
        """
        self.timewinds_logcalls = self.split_timewindow_logcalls(time_gap)
                
        log_and_pure_calls = list()

        for e in self.timewinds_logcalls:
            log_and_pure_calls.append((self._calc_calledfunc(e),
                                       self.get_pure_func(e)))

        timewindows_func_count = list()
        for e in log_and_pure_calls:
            timewindows_func_count.append(
                self.get_all_calledfunc_count(e[0], e[1]))
        self.timewindows_func_count = timewindows_func_count

        return timewindows_func_count

    def get_statistic_timewind(self, func_name, time_gap):
        ''' param: func_name 函数/任务名
            param: time_gap  时间窗口大小
            返回指定函数依据时间窗口获得的统计量
            ex: a1 = [12, 14, 16]
                a2 = [13, 10, 20] 这种形式
        '''
        a = list()
        for e in self.split_timewindow(time_gap):
            if func_name in e:
                a.append(e[func_name])
            else:
                a.append(0)
        return a
        
    
    



# 根据ID获得函数名字
def get_taskname(task_path, task_id):
    """ 根据ID获得函数名
        task_path: 源代码文件路径, 在TinyOS中一般为app.c
        task_id: 函数id
        return: 函数名
    """
    with open(task_path,'r')as f:
        src = f.read()
    line = src.split('\n')
    task_line = filter(lambda e: '__runTask()' in e , line)
    task_withnote = map(lambda e: e.strip() , task_line)

    for e in task_withnote:
        if '*/' in e:
            a = e.index('*/')+2
            task_withnote[task_withnote.index(e)] = e[a:]

    #task_define = map(lambda e: e[:-12], task_withnote)
    task_define = map(lambda e: e[:-12], task_withnote)    # 保留__runTask
    task_define = list(set(task_define))
    print (task_withnote[0])

    task = list()

    for e in  task_define:
        for a in line:
            if e + ' = ' in a:
                task.append(a.strip())
    
    tmp = None
    for i in task:
        i = i.split(' ')
        if int(task_id.strip(), 16) == int(i[-1][:-1]):
            return i[0]
        #p#rint 'i = ', i[-1][:-1], int(i[-1][:-1].strip()), i[0]
        
    return tmp

"""
# That function use the te_f_oneway as ANOVA analysis written by Zhang Te a nice people.
def get_route_related_fun(nodes, func_name, time_gap, alpha=0.05):
    ''' param: nodes     所有节点数据
        param: func_name 要判断的函数/任务名
        param: time_gap  统计的时间窗口大小(ms), 该参数决定样本容量
        param: alpha     显著水平

        return: True     经过方差分析, 多组数据之间的差异具有统计学意义,
                         即该函数的调用次数与组间因素(不同路由)的影响有关
                False    反之

        根据指定alpha返回某函数是否路由相关
        该函数基于方差分析, 且没有进行方差齐检验
    '''
    all_statistic = list()
    for e in nodes.values():
        all_statistic.append(e.get_statistic_timewind(func_name, time_gap))
    f = te_f_oneway.te_f_oneway(*all_statistic)

    f_alpha = F.isf(alpha, len(all_statistic)-1, sum([len(e) for e in all_statistic])-len(all_statistic))

    return True if f > f_alpha else False
"""

# That function use the f_oneway as ANOVA analysis provided by scipy library.
def get_route_related_fun(nodes, func_name, time_gap, alpha=0.05):
    ''' param: nodes     所有节点数据
        param: func_name 要判断的函数/任务名
        param: time_gap  统计的时间窗口大小(ms), 该参数决定样本容量
        param: alpha     显著水平

        return: True     经过方差分析, 多组数据之间的差异具有统计学意义,
                         即该函数的调用次数与组间因素(不同路由)的影响有关
                False    反之

        根据指定alpha返回某函数是否路由相关
        该函数基于方差分析, 且没有进行方差齐检验
    '''
    all_statistic = list()
    for e in nodes.values():
        all_statistic.append(e.get_statistic_timewind(func_name, time_gap))
    f, p = f_oneway(*all_statistic)
    # print f, p
    return True if p < alpha else False
    



def vector_angle(ax):
    """ 计算向量夹角
        返回cos alpha
    """
    if type(ax) != type(ax):
        print ('ERROR: ax is must zip-type. ')
        return
    a_mul_b = sum(map(lambda a, b: float(a)*b, ax))

    a, b = 0.0, 0.0    
    for e in ax:
        a += float(e[0])**2
        b += float(e[1])**2
    
    assert a * b != 0, '向量夹角计算数据错误'     
    cos_alpha = a_mul_b / math.sqrt(a * b) 
    return cos_alpha
    

def union_dict(value = 'sum', *objs): 
    """ 合并字典，合并后的值取决于参数value
        value: 'sum' 为合并后值求和
        value: 'average' 为合并后值求平均值
    """
    _keys = set(sum([obj.keys() for obj in objs],[]))  
    _total = {}  
    for _key in _keys:
        if 'average' == value:
            t = map(lambda x: 1 if _key in x else 0, objs)  # 计算累加次数
        elif 'sum' == value:
            t = [1]
        else:
            raise ValueError('value is "sum" or "average" only. ')
            
        _total[_key] = sum([obj.get(_key,0) for obj in objs]) / float(sum(t))
    return _total  




def get_axs(num=140):
    ''' 获得指定数量的子图, 子图数量总是4的倍数 31857
    '''
    axs = list()
    for i in range(1, num / 4 + 1):
        plt.figure(i)
        for i in range(1, 5):
            axs.append(plt.subplot(24 * 10 + i))

    if num % 4 != 0:
        plt.figure(num / 4 + 1)
        for i in range(1, 5):
            axs.append(plt.subplot(24 * 10 + i))
    return axs


if __name__ == '__main__':
    path = 'C:/Users/tete/Downloads/wsnA-master/logcalls/2-4/'  # 数据路径
    result_path = "C:/Users/Administrator/Desktop/tools/cooja/TaskCalls/result/5-result/"  # 结果路径
    node_amount = 2  #节点数量
    nodes = dict()  # 存储所有节点的NodeLogcalls实例
    for i in range(1, node_amount + 1):
        print(str(i) + ' node has been created.')
        nodes['node_' + str(i)] = NodeLogcalls(path + str(i) + '.txt')
        #nodes['node_'+str(i)].help_gc()
        #nodes['node_'+str(i)].save_to_file(result_path+'node_'+str(i)+'.txt')
    """ 找出调用函数最多的节点, 以及调用函数的数量这样可
    以在统计中覆盖到所有的函数，并且构造合适数量的子图
    """
    most_func_node = {'node_1': 0}
    most_func_node['node_1'] = len(nodes['node_1'].get_calledfunc())
    for e in nodes:
        foo = nodes[e].get_calledfunc()
        if len(foo) > most_func_node[most_func_node.keys()[0]]:
            most_func_node = {e: len(foo)}

    print('the number of total functions = ', most_func_node[
        most_func_node.keys()[0]])
    """ 获取调用函数最多节点的中被调用的所有函数 """
    allfunc = list()
    allfunc = nodes[most_func_node.keys()[0]].get_calledfunc()
    """  x坐标为节点编号, 本例为(1 - 40)"""
    x_nodes = [i for i in range(1, node_amount + 1)]
    y_logcalls = list()
    ''' work prefect '''
    for e in nodes['node_1'].called_func:
        print( get_route_related_fun(nodes, e, 500))
        
        
        
    """ 获取一定数量的子图， 每个子图用来描述一个函数， 
    子图是由一个大图分成四个小图得来的，因此子图数量总是
    4的倍数， 例如获取10个子图， 则该函数返回12个子图
    """ 
    axs = get_axs(most_func_node[most_func_node.keys()[0]])
    select_ax = 0   # 选择的子图位置
    for e in allfunc:
        """ 画图
        画图有些耗时间，耐心等待。
        """
        y_logcalls = list()
        for i in x_nodes:
            y_logcalls.append(nodes['node_'+str(i)].get_func_count(e))
        plt.sca(axs[select_ax])
        plt.plot(x_nodes, y_logcalls)
        select_ax += 1
        print (str(e), select_ax, ' is over.\n\n')
