# Thesis-ZhangTe
1. 本仓库包含了大部分与文章相关的数据,代码,工具和相关开源项目.
仍有部分相关内容,数据,以及琐碎的工作难以迁至本仓库下.



## 环境配置
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
