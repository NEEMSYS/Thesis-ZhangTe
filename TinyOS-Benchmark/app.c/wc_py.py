#-*- coding: utf-8 -*-

import sys
def wc(fn):
    with open(fn,'rb') as f:
        count = 0
        last_data = '\n'
        while True:
            data = f.read(0x400000)
            if not data:
                break
            count += data.count(b'\n')
            last_data = data
        if last_data[-1:] != b'\n':
            count += 1 # Remove this if a wc-like count is needed
    return count
if __name__ == '__main__':
    print(wc('./MultihopOscilloscope/app.c'))
