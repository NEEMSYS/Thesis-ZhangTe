# TinyOS Benchmark
A TinyOS'task exection sequence benchmark and data set
This profile.py analyze the dataset to create a benchmark

To acquire the dataset, typeing following command:
```shell
curl -o dataset http://p7omueu6s.bkt.clouddn.com/tinyos-dataset.zip
unzip -o -d TinyOS-Benchmark/dataset tinyos-dataset.zip
```
The dataset from part of TinyOS offical app example runing under the Cooja.

```preprocess.py``` 预处理数据，其中任务包括：
1. 从原始数据中滤掉<5MB的文件
2. 将任务运行日志处理，提取出时间戳和任务ID，时间戳和任务ID的形式如下，最后将该Python数据结构使用pickle持久化到preprocessed-data目录下 
```
[ 
(timestamp1, id1),
(timestamp2, id2),
(timestamp3, id3),
     ...
]
```
