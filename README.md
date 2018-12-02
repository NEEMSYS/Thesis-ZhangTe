# Thesis-ZhangTe

## Installing TinyOS
TinyOS环境配置:
step 1
> 下载TinyOS源码**```git clone https://github.com/yulincoder/tinyos-main.git```**, 注意这是我fork的仓库,非官方仓库

step 2
> 按照 **```http://tinyprod.net/repos/debian/```** 进行TinyOS环境安装

如果上述安装出现仓库验证失效情况,按照如下操作取消apt对GPG验证失效的源强制安装
> **``` emacs -nw /etc/apt/apt.conf.d/70debconf ```**

> 添加 **```Acquire::AllowInsecureRepositories “true;```**

完成上述配置,再重新安装

