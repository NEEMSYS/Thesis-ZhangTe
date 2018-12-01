#!/usr/bin/python3
#-*- coding: utf-8 -*-
import os
import shutil
src_path = '/media/tete/E/tinyos-main/apps/'
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
        print('\tmaking : {}'.format(e[0]))
        os.system('make telosb')
        app_c = e[0] + '/build/telosb/app.c'
        dest_c = dest_path + e[0][len(src_path):]
        try:
            if os.path.isfile(app_c):
                print('\tbuilding folder and copying app.c: {}'.format(dest_c))
                if not os.path.exists(dest_c):
                    os.makedirs(dest_c, 0777)
                shutil.copy(app_c, dest_c + '/app.c')
            else:
                print("[WARNNING] make app failed: {}".format(e[0]))
        except:
            print("ignore ...")
            
