import re
with open('t2pad-trace-functioned-if-else-switch-30min-tirggered.txt', 'r') as f:
	
logs = map(lambda e: (re.findall('[0-9]{13}', e)[0], str(int(re.findall('0x[0-9a-f]{4}', e)[0], 16))), logs)

with open('t2pad-trace-functioned-if-else-switch-30min-tirggered-dec.txt', 'w+') as f:
	map(lambda e: f.write(', '.join(e)+'\n'), logs)