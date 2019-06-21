import re
with open('t2pad-trace-functioned-if-else-switch-30min-tirggered.txt', 'r') as f:
	logs = f.readlines()
	
logs = map(lambda e: re.findall('0x[0-9a-f]{4}', e)[0], logs)

with open('small-data.txt', 'w+') as f:
	map(lambda e: f.write(e+'\n'), logs)