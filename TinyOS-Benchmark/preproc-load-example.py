import pickle
import os
import gc
data_path = 'preprocessed-dataset'
paths_data = {}
paths = list(os.walk(data_path))
for i in range(len(paths)):
    print('{}/{}: {}'.format(i, len(paths), paths[i][0]))
    if paths[i][0] not in paths_data:
        paths_data[paths[i][0]] = []
    for e2 in paths[i][2]:
        fn = os.path.join(paths[i][0], e2)
        with open(fn, 'rb') as f:
            paths_data[paths[i][0]] += pickle.load(f)

for k, v in paths_data.items():
    print(k, len(v))
