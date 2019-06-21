# Project of ZhangTe's Thesis
1. 本仓库包含了大部分与文章相关的数据,代码,工具和相关开源项目.
仍有部分相关内容,数据,以及琐碎的工作难以迁至本仓库下.

## Tools related
1. TinyOS
2. Contiki
3, Docker
4. Clang
5. Cooja
6. pycparse
7. Data science packages underlying python 2&3
8. MSP430-GCC tool chain 
9. Linux, Emacs and similar tools on Linux
10. TelosB motes (Hardware)
11. Jupyter Notebook
12. IEEE 802.15.2 Sniffer ()
13. rtl2dot (Call graph)

## 一. 环境配置
### 1. Installing TinyOS
TinyOS环境配置:
step 1
> 下载TinyOS源码**```git clone https://github.com/yulincoder/tinyos-main.git```**, 注意这是我fork的仓库,非官方仓库

step 2
> 按照 **```http://tinyprod.net/repos/debian/```** 进行TinyOS环境安装

如果上述安装出现仓库验证失效情况,按照如下操作取消apt对GPG验证失效的源强制安装
> **``` emacs -nw /etc/apt/apt.conf.d/70debconf ```**

> 添加 **```Acquire::AllowInsecureRepositories “true;```**

完成上述配置,再重新安装

### 2. Docker Configuration 
* Docker 安装:  使用docker 官方脚本安装
> `curl -fsSL https://get.docker.com -o get-docker.sh`

> `sh get-docker.sh`

* 添加当前用户到docker group
> step 1: 执行`cat /etc/group | grep docker`, 确认docker组是否存在, 如果docker group不存在,则 `sudo groupadd docker` 添加docker 组.

> step 2: 执行`groups`确认自己在不在docker组, 存在则结束本过程,不存在继续下面

> step 3: 执行`sudo gpasswd -a $USER docker`,添加USER到docker组

> step 4: 重启服务`sudo service docker restart`

> step 5: 切换用户组 `newgrp - docker`

> step 6: ``` newgrp - `groups $USER | cut -d' ' -f1`; ```

> step 7: pkill x

* Jupyter Notebook 安装与运行 (文章分析相关代码大部分在本环境下运行,环境使用Python3. 但仍有部分遗留代码使用Python2.)
> step 1 : docker pull jupyter/datascience-notebook

> step 2: 运行`docker run --rm -p 10000:8888 -e  GRANT_SUDO=yes -v "$PWD":/home/jovyan/work jupyter/datascience-notebook:latest`启动Jupyter notebook

> 更多文档参考: https://hub.docker.com/r/jupyter/datascience-notebook/

### 3. Cooja Configuration
> step 1: **```git clone https://github.com/contiki-os/contiki ```**

> step 2: 进入Cooja目录并构建Cooja `cd contiki/tool/cooja && ant run`

> step 3: 按照[打补丁文件](https://github.com/NEEMSYS/Thesis-ZhangTe/blob/master/Patch-Cooja-TinyOS/README.md) 为Cooja打补丁, 补丁的作用在文章中有详细说明

> declare: 由于补丁文件会带来jar交叉依赖, 因此必须在打补丁之前先构建一遍cooja先生成`鸡生蛋,蛋生鸡`中的蛋以避免该问题

#### 4. no_gui 运行Cooja
> 执行`ant run_nogui -Dargs='path of csc file'`, 需要注意的是cooja的路径是以`cooja/build/`作为当前目录.因此无论是生成log文件还是csc文件的路径都是以`cooja/build/`作为起始路径

### 5. 安装LLVM, Clang及Python clang模块
 该工具用来使用AST(抽象语法树)分析TinyOS nesC编译后生成的app.c源文件. 分析内容涉及任务提取,任务规模分析
 ...

## 二. 预处理数据
> step 1: 进入[TinyOS-Benchmark](https://github.com/NEEMSYS/Thesis-ZhangTe/tree/master/TinyOS-Benchmark)目录

> step 2: 按照上述目录README下载任务日志数据集,(但是由于[七牛云](https://www.qiniu.com/)于2018年夏天收回测试域名,因此任务数据集链接已经无法访问数据集,有时间了给数据集挪个窝)

> step 3: 执行`python2 ./preprocess.py` 程序会预处理raw data, 并将预处理后的数据存储于**preprocessed-dataset**目录

> step 4: 进入[pycparse](https://github.com/NEEMSYS/Thesis-ZhangTe/tree/master/chapter3/pycparser/examples/test), 执行`python3 get_task_id.py`使用AST提取所有任务,并代码行数分析任务规模. 分析结果以*.csv格式放置于每个应用app.c所在目录下

说明: 由于研究涉及多个时间阶段,因此代码既有py2也有py3


## 三. 说明
chapter2 包含第二章数据分析部分，chapter3为第三章T2PAD代码，chapter5为第五章GRU神经网络部分，inject-to-branch为第五章分支点插装子模块，该仓库也在本组织下．第4章节T2PAD.U的代码在T2PAD基础上进行，其中最终的插装用的异常检测C代码是我手工写的，没有自动生成．

## 四．注意，数据集链接失效了，文件还在，但是由于七牛云修改服务，不再提供免费的二级域名，因此那个url失效了．由于暂时还没找到合适的存储地方，因此先就这样吧，如有需要，可以找我下载（如果是想接着继续进行研究，不建议这样做，这样无助于理解本文涉及程序和进一步研究）