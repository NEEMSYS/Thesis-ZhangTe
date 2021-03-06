#-*- coding: utf-8 -*-
import os
def dec_to_hex(num):
    """ num : string
    range: 0x00-0x00ff
    """
    t = int(num)
    assert 0x00ff, "out of range: " + str(t)
    r = hex(t)
    result = None
    if t > 0x000f:
        result = '0x00' +r[-2:]
    else:
        result = '0x000' +r[-1]
    return result

def get_task_id(task_path):
    global task_line
    with open(task_path) as f:
        line = f.readlines()

    task_line = filter(lambda e: '__runTask()' in e , line)
    tasks_name = list()

    for e in task_line:
        if '/*' not in e and e not in tasks_name:
            tasks_name.append(e.strip())
        elif '/*' in e:
            tasks_name.append(e[e.index('*/')+2:].strip())

    temp_tasks_name = list(map(lambda x: x[:-12], tasks_name))
    temp_tasks_id = list() #用于存放含有对任务名定义的行
    temp_list = list() #存放分割后的 temp_tasks_id
    temp_task_define = list() ##用于仅仅存放含有对任务名定义的行
    task_id_temp = list()
    task_id = list() 
    
    for e in temp_tasks_name:
        for i in line:
            if e in i and ' = ' in i and 'U' in i:
                temp_tasks_id.append(i.strip())

    for e in temp_tasks_id:
        temp_list.append(e.split(' '))
    #map(lambda e: temp_list.append(e.split(' ')), temp_tasks_id) # do not work in python3
    for e in temp_tasks_name:
        for i in temp_list:
            if e == i[0] and i not in temp_task_define:
                temp_task_define.append(i)

    for e in temp_task_define: task_id_temp.append((e[0], e[-1][:-1]))
    #map(lambda e: task_id_temp.append((e[0], e[-1][:-1])), temp_task_define)    # do not work in python3

    for e in task_id_temp: task_id.append((e[0], dec_to_hex(e[1])))
    #map(lambda e: task_id.append((e[0], dec_to_hex(e[1]))), task_id_temp)# do not work in python3
    
    return task_id, task_id_temp # 分别以十六进制和十进制表示


import count_lines_func as cf
def getalltask_lines(srcfile):
    a, b = get_task_id(srcfile)
    cf.ast_init(srcfile)
    tasks = {}
    for idx, e in enumerate(a):
        task_name = e[0] + '__runTask'
        tasks[task_name] = cf.f_lines(task_name)
        print('\t[INFO]:{}/{}. {} \tscale:{}'.format(idx, len(a), e, tasks[task_name]))        
    task_info_path = srcfile[:-5] + 'task_scale.csv'#srcfile.replace('/app.c', '/task-scale.csv')
    with open(task_info_path, 'w+') as f:
      print('\t[SAVE]: Save to {}'.format(task_info_path))
      for k, v in tasks.items():
          f.write(k + ',' + str(v) + '\n')


        
if __name__ == '__main__':
    import time
    app_root = '../../../../TinyOS-Benchmark/app.c/'
    paths = list(os.walk(app_root))
    vaild_app = []
    for e in paths:
        if 'app.c' in e[2]:
            vaild_app.append(os.path.join(e[0], 'app.c'))
    for idx, e in enumerate(vaild_app):
        print('[' + str(idx) + '/' + str(len(vaild_app)) + ']', e)
        getalltask_lines(e)
    #getalltask_lines('./app.c')
    #print (a, '\n\n', b)
    


