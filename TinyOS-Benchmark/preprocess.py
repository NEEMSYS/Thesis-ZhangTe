#-*- coding: utf-8 -*-
# Preprocessing the dataset through delete floder size smaller than 5MB
import os
import stat 
import shutil
import pickle
import re
def getflodersize(floder_path, unit = 'kb'):
    ''' Get the size of floder.
    '''
    u = {'mb': 1024*1024, 'kb': 1024, 'b': 1}
    size = 0
    for root, dirs, files in os.walk(floder_path):
        for f in files:
            size += os.path.getsize(os.path.join(root, f))
    return round(float(size)/u[unit],2) 
	
	
def rmfloder(floder_path, force = 'f'):
    '''  Remove a floder.
    :param floder_path:
    :param force: Is force?
    :return: string indicated to sucessced of failed
    '''
    if force != 'f':
        os.rmdir(floder_path)
        return "delete ok"
    if os.path.exists(floder_path):
        for filelist in os.walk(floder_path):
            for name in filelist[2]:
                os.chmod(os.path.join(filelist[0],name), stat.S_IWRITE)
                os.remove(os.path.join(filelist[0],name))
        shutil.rmtree(floder_path)
        return "delete ok"
    else:
        return "not exist path: " + floder_path
		
def removed_smallfloder(path, mb = 5):
    ''' remove smaller folders under the path
    :param path:
    :param mb: size
    :return: None
    '''
    for e1 in os.walk(path):
        size = getflodersize(e1[0], 'mb')
        if size < mb:
            rmfloder(e1[0]) # remove it
            print('Delete: ', e1[0], ', size =', size, 'MB')
        else:
            print('\tIgnore: ', e1[0], ', size =', size, 'MB')
			

def extra_structurizationdata(row_data_path, processed_path):
    '''
    :param row_data_path: folder path of row data
    :param processed_path: folder path of processed data
    :return: None
    '''
    if not os.path.exists(row_data_path):
        raise FileNotFoundError(row_data_path)
    if os.path.exists(processed_path):
        cmd = input("Type y/n to remove existed folder: {} to generate new preprocessed data: ".format(processed_path))
        if cmd.lower() == 'y':
            print(rmfloder(processed_path))
        else:
            return
    os.mkdir(processed_path, 777)
    for e1 in os.walk(row_data_path):
        for e2 in e1[2]:
            fn = os.path.join(e1[0], e2)
            prefn = fn.replace(row_data_path, processed_path, 1) + '.pkl'
            pre_dir = e1[0].replace(row_data_path, processed_path, 1)
            if not os.path.exists(pre_dir):
                os.makedirs(pre_dir)
            print('preprocessing: ',fn, ', \tdump the processed raw data to:', prefn)
            with open(prefn, 'ab') as pre_f:
                with open(fn, 'r') as raw_f:
                    data = list(map(lambda e: e.strip(), raw_f.readlines()))  # 去了空格
                    del data[0] # 删除log中第一个任务
                    data = list(
                        map(lambda e: (re.findall('([0-9]{13,}) \*\*\*', e)[0], re.findall('= (0x[0-9a-f]{4,})', e)[0]),
                            data))
                    data = list(map(lambda e: (int(e[0]), e[1]), data))  # 时间转为int型
                pickle.dump(data, pre_f)

if __name__ == '__main__':
    print(''' Delete all folders of which size smaller 5MB.
    ''')
    removed_smallfloder('./dataset')
    extra_structurizationdata('./dataset', './preprocessed-dataset')
