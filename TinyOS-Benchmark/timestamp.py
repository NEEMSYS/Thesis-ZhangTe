
import re
import os
def timestemp(fn):
    with open(fn, 'r') as f:
        logs = f.readlines()
    if len(logs) < 1000: return
    if '.pkl' in fn: return
    print fn
    start = re.findall('[1-9][0-9]{12,}', logs[0])
    end = re.findall('[1-9][0-9]{12,}', logs[-1])
    print start, ' --- ', end, (int(end[0]) - int(start[0])) / 1000.0 / 60


for e1 in os.walk('./dataset'):
    for e2 in e1[2]:
        fn = os.path.join(e1[0], e2)
        timestemp(fn)
        
