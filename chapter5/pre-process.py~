import re
with open('t2pad-trace-functioned-if-else-switch-30min-tirggered.txt', 'r') as f:
    logs = f.readlines()
	
logs = map(lambda e: re.findall('0x[0-9a-f]{4}', e)[0], logs)
'''
for idx, v in enumerate(logs):
    print(idx, v)
    if idx > 10: break
'''
with open('pre-raw-seq.txt', 'w+') as f:
    for idx, v in enumerate(logs):
        if idx % 10000 == 0: print(idx)
        f.write(v + '\n')
    #map(lambda e: f.write(e + '\n'), logs)
