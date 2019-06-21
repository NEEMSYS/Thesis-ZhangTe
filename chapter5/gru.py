import torch as t

with open('pre-raw-seq.txt', 'r') as f:
    rawdata = f.readlines()[1:1000]
    rawdata = list(map(lambda e: e.strip(), rawdata)) 
classes = list(set(rawdata))
class_num = len(classes)

# cover to one-hot
class_code_map = {}

for idx, c in enumerate(classes):    
    class_code_map[c] = [0 for i in range(class_num)]#t.zeros(class_num)
    class_code_map[c][idx] = 1

def code2class(encode):
    # encode 为一个向量[0, 1, 0, ..., 0]
    for idx in range(len(encode)):
        if encode[idx] == 1:
            return classes[idx]


encode_data = []
for label in rawdata:
    encode_data.append(class_code_map[label])
encode_data = t.tensor(encode_data)    
for idx, v in enumerate(encode_data):
    print(v, rawdata[idx], code2class(v), v[0])
print(encode_data)    



