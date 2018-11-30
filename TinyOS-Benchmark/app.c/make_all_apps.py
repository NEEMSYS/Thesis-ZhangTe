#-*- coding: utf-8 -*-
import os
src_path = '/media/tete/F/tinyos-main/apps/'
dest_path = '/media/tete/E/theis/TinyOS-Benchmark/app.c/'

def haveNCfile(walk_type):
    for e in walk_type[2]:
        if '.nc' in e:
            return True
    return False

paths = os.walk(src_path)
# make all app
for e in paths:
    if haveNCfile(e):
        os.chdir(e[0])
        print('making : ', e[0])
        os.system('make telosb')
        
