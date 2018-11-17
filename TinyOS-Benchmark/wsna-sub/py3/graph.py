# -*- coding: utf-8 -*-
import matplotlib.pyplot as plt

import sys
reload(sys)
sys.setdefaultencoding('utf-8')

'''图1：任务转移趋势图'''
t02 = [1, 1, 0, 2, 3, 0, 1, 0, 1, 1]
t05 = [0, 1, 0, 1, 1, 0, 1, 0, 2, 1]
t11 = [8, 12, 12, 14, 16, 11, 8, 4, 8, 15]
t03 = [3, 6, 2, 3, 3, 1, 1, 5, 4, 6]
t01 = [2, 5, 3, 4, 4, 0, 2, 4, 4, 9]
t1c = [93, 43, 49, 42, 53, 51, 48, 44, 47, 37]
t18 = [85, 34, 38, 32, 40, 41, 41, 41, 40, 27]

#god = [t02, t05, t11, t03, t01, t1c, t18]
# 最后一个数据有些异常，因此不使用
god = [t02[:-1], t05[:-1], t11[:-1], t03[:-1], t01[:-1], t1c[:-1], t18[:-1]]

n = ['VirtualizeTimerC__0__updateFromTimer', 'Msp430RefVoltArbiterImplP__switchOff'\
,'CC2420ReceiveP__receiveDone_task','AdcP__readDone'\
,'AlarmToTimerC__0__fired','SerialDispatcherP__0__signalSendDone'\
,'SerialP__RunTx']
#f, (plt, ax2) = plt.subplots(1, 2, figsize=(10,5))
 

 
###################
## Absolute count
###################
#==============================================================================
# x1 = [t02, t05, t11, t03, t01, t1c, t18]
# plt.bar(bar_l, t02, width=bar_width,
#         label=n[0], alpha=0.5, color='#000000')
# plt.bar(bar_l, t05, width=bar_width,
#         bottom=t02, label=n[1], alpha=0.5, color='#00ffff')
# plt.bar(bar_l, t11, width=bar_width,
#         bottom=[sum(e) for e in zip(t02, t05)], label=n[2], alpha=0.5, color='#ffff00')
# plt.bar(bar_l, t03, width=bar_width,
#         bottom=[sum(e) for e in zip(t02, t05, t11)], label=n[3], alpha=0.5, color='#0000ff')
# plt.bar(bar_l, t01, width=bar_width,
#         bottom=[sum(e) for e in zip(t02, t05, t11, t03)], label=n[4], alpha=0.5, color='#ff0000')
# plt.bar(bar_l, t1c, width=bar_width,
#         bottom=[sum(e) for e in zip(t02, t05, t11, t03, t01)], label=n[5], alpha=0.5, color='#00ff00')
# plt.bar(bar_l, t1c, width=bar_width,
#         bottom=[sum(e) for e in zip(t02, t05, t11, t03, t01, t1c)], label=n[6], alpha=0.5, color='#ff00ff')
#          
#==============================================================================
 
# 解决matplotlib显示汉字乱码
import matplotlib.font_manager as fm
myfont = fm.FontProperties(fname='C:/Windows/Fonts/msyh.ttc')

def g1(**kw):
#==============================================================================
#     colors = ['#00ffff', 'r', '#f843a1','#0ef2a4', '#ffaa22','#f458f9'\
#     ,'#00ff00','#09f9f9','#ae59f9','#f0f0f0','#0a0a0a','#0ee033','#20dd0a'\
#     ,'#0f0044']
#==============================================================================
    colors = ['#ffffff', '#C0C0C0','#808080', '#646464','#4B4B4B'\
    ,'#202020','#000000']
    labels = ['时间窗口' + str(i+1) for i in range(10)]
    cache_argv = list()
    bar_width = 0.5
    # positions of the left bar-boundaries
    bar_l = [i+1 for i in range(len(kw.values()[1]))]
    # positions of the x-axis ticks (center of the bars as bar labels)
    tick_pos = [i+(bar_width/2) for i in bar_l]
    for k, v in kw.items():
        if not cache_argv:
            plt.bar([i+1 for i in range(len(v))], v, width=bar_width,
                label=k, alpha=0.5, color=colors[0])
        else:
            plt.bar([i+1 for i in range(len(v))], v, width=bar_width,
                    bottom=[sum(e) for e in zip(*cache_argv)], label=k, alpha=0.5,
                    color=colors[len(cache_argv)%len(colors)])
        plt.xticks([i+1 for i in range(len(v))], labels, fontsize =10, fontproperties=myfont) 
        cache_argv.append(v)
    plt.legend()
    #plt.xlim([min(tick_pos)-bar_width, max(tick_pos)+bar_width])
    plt.ylim([min(tick_pos)-bar_width, max(tick_pos)+bar_width+330])
    plt.grid()
     
    
    #plt.xlabel("SerialP__RunTx")
    plt.ylabel("频 数", fontproperties=myfont)
    #plt.xlabel("时间窗口", fontproperties=myfont)
    

    #plt.title("SerialP__RunTx")
    # rotate axis labels
    #plt.setp(plt.gca().get_xticklabels(), rotation=45, horizontalalignment='right')
    # X轴字体倾斜
    plt.setp(plt.gca().get_xticklabels(), rotation=-25, horizontalalignment='left')
    plt.show()

g1(**dict(zip(n, god)))