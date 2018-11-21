# t2pad-upgrade-file
### Upgrade Cooja &amp; TinyOS for t2pad
   
Usage:
* Upgrade TinyOS via following command
```shell
cd tinyos-main/tos
patch -p1 < upgrade.system.patch
```
* Then upgrade Cooja
```shell
cd contiki/tools/
patch -p0 < upgrade.cooja.patch
```




