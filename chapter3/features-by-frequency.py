#-*- coding: utf-8 -*-
import pickle
import os
import gc

def containlogfile(folder):
    ''' Does the folder contain log file?
    Args:
        folder: str
    '''
    
    for e in os.listdir(folder):
        if '.pkl' in e:
            return True        
    return False

data_path = '../TinyOS-Benchmark/preprocessed-dataset/'
paths_data = {}
paths = list(os.walk(data_path))
for i in range(len(paths)):
    if i > 4: break
    print('{}/{}: {}'.format(i, len(paths), paths[i][0]))
    if containlogfile(paths[i][0]) and paths[i][0] not in paths_data:
        paths_data[paths[i][0]] = []
    for e2 in paths[i][2]:
        fn = os.path.join(paths[i][0], e2)
        with open(fn, 'rb') as f:
            paths_data[paths[i][0]] += pickle.load(f)


def most_tasks(ls, num=5):
    ''' shoot tasks make up the majority in the logs
    Args:
        ls: list, logs look [(timestamp, taskid) ...]
        num: int, the top of task
    Retval:
        ([(taskid, number, precent) ... ], number of tasks)
    '''
    count = {}
    for e in ls:
        if e[1] in count:
            count[e[1]] += 1
        else:
            count[e[1]] = 1

    count = list(map(lambda k: (k, count[k]), count.keys()))
    count = sorted(count, key=lambda e: e[1], reverse=True)
    print(count)    
    count = list(map(lambda e: (e[0]), e[1],
                     round(float(e[1]) / len(ls), 2)), count)
    print(count)

    
for k, v in paths_data.items():
    print(k, most_tasks(v))
