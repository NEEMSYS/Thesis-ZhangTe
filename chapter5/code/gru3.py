import pickle
import os


# recreate the all of data?
recreate_data = True
data_path = 'data/'

# type of raw_data is the `list`
if not recreate_data:
    with open(data_path+'raw-data.pkl', 'rb') as f_pkl:
        print('[INFO] Loading the raw-data.pkl file')        
        raw_data = pickle.load(f_pkl)
else:    
    with open(data_path+'raw-data.txt') as f:
        print('[INFO] Recreate the raw-data.pkl file')
        raw_data = f.readlines()[1:5000]
        raw_data = list(map(lambda e: e.strip(), raw_data))
        with open(data_path+'raw-data.pkl', 'wb') as f_pkl:
            pickle.dump(raw_data, f_pkl)

classes = list(set(raw_data))
classes_num = len(classes)

# encode the label of branch point then dump int the pickle
# classes2code: {'label': [(one-hot), class number]}
# code2classes: {(one-hot): ['label', class number]}
if not recreate_data:
    with open(data_path+'classes2code_map.pkl', 'rb') as f_pkl:
        print('[INFO] Loading the classes2code_map.pkl file')                
        classes2code_map = pickle.load(f_pkl)
    with open(data_path+'code2classes_map.pkl', 'rb') as f_pkl:
        print('[INFO] Loading the code2classes_map.pkl file')                
        code2classes_map = pickle.load(f_pkl)        
else:    
    classes2code_map = {k: [[0 for i in range(classes_num)], 0] for k in classes}
    code2classes_map = {}
    for idx, v in enumerate(classes):
        classes2code_map[v][0][idx] = 1
        classes2code_map[v][0] = tuple(classes2code_map[v][0])
        classes2code_map[v][1] = idx
        
        code2classes_map[classes2code_map[v][0]] = [v, idx]
    with open(data_path+'classes2code_map.pkl', 'wb') as f_pkl:
        print('[INFO] Recreate the classes2code_map.pkl file')        
        pickle.dump(classes2code_map, f_pkl)

    with open(data_path+'code2classes_map.pkl', 'wb') as f_pkl:
        print('[INFO] Recreate the code2classes_map.pkl file')        
        pickle.dump(code2classes_map, f_pkl)
        
# encode the raw-data to one-hot seq and class number seq
if not recreate_data:
    with open(data_path+'encoded-onehot.pkl', 'rb') as f_pkl:
        print('[INFO] Loading the encoded-onehot.pkl file')                        
        onehot_seq = pickle.load(f_pkl)
    with open(data_path+'encoded-classnumber.pkl', 'rb') as f_pkl:
        print('[INFO] Loading the encoded-classnumber.pkl file')                        
        classnumbder_seq = pickle.load(f_pkl)
else:    
    onehot_seq = []
    classnumbder_seq = [ ]   
    for e in raw_data:
        onehot_seq.append(classes2code_map[e][0])
        classnumbder_seq.append(classes2code_map[e][1])
    with open(data_path+'encoded-onehot.pkl', 'wb') as f_pkl:
        print('[INFO] Recreate the encoded-onehot.pkl file')                
        pickle.dump(onehot_seq, f_pkl)
    with open(data_path+'encoded-classnumber.pkl', 'wb') as f_pkl:
        print('[INFO] Recreate the encoded-classnumber.pkl file')                
        pickle.dump(classnumbder_seq, f_pkl)
        
print('[INFO] Trainning The Model ... ')
import torch
import torch.nn as nn
import torch.optim as optim
from tensorboardX import SummaryWriter
from torch.utils.data import TensorDataset, DataLoader

# Device configuration
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

# Hyperparameters
window_size = 3
input_size = classes_num
hidden_size = classes_num * 2
num_layers = 2
num_classes = classes_num
num_epochs = 15000
batch_size = 2**8 # 64

class Model(nn.Module):
    def __init__(self, input_size, hidden_size, num_layers, num_keys):
        super(Model, self).__init__()
        self.hidden_size = hidden_size
        self.num_layers = num_layers
        self.gru = nn.GRU(input_size, hidden_size, num_layers, batch_first=True)
        self.fc = nn.Linear(hidden_size, num_keys)
        self.first = True
            
    def forward(self, input):
        '''
        if self.first:
            self.first = False
            self.h_t = torch.zeros(self.num_layers, input.size(0), self.hidden_size).cuda()        
        out, self.h_t = self.gru(input, (self.h_t))
        '''
        h_t = torch.zeros(self.num_layers, input.size(0), self.hidden_size).cuda()
        out, _ = self.gru(input, (h_t))        
        out = self.fc(out[:, -1, :])
        return out


class LSTMModel(nn.Module):
    def __init__(self, input_size, hidden_size, num_layers, num_keys):
        super(Model, self).__init__()
        self.hidden_size = hidden_size
        self.num_layers = num_layers
        self.lstm = nn.lstm(input_size, hidden_size, num_layers, batch_first=True)
        self.fc = nn.Linear(hidden_size, num_keys)
        self.first = True
            
    def forward(self, input):
        h_t = torch.zeros(self.num_layers, input.size(0), self.hidden_size).cuda()
        c_t = torch.zeros(self.num_layers, input.size(0), self.hidden_size).cuda()        
        out, _ = self.gru(input, (h_t, c_t))        
        out = self.fc(out[:, -1, :])
        return out
    
    
def adjust_lr(init_lr, optimizer, epoch, rounds = 10, min_lr = 0.001):
    # half of previous lr
    lr = init_lr * (0.5 ** (epoch//rounds))
    if lr <= min_lr:
        lr = []
        for g in optimizer.param_groups:
            lr.append(g['lr'])
        return lr        
    for g in optimizer.param_groups:
        g['lr'] = lr
    return lr
    
train_set = [onehot_seq[i: i+ window_size] for i in range(len(onehot_seq)-window_size)]
labels_set = classnumbder_seq[window_size:]
print('-'*10, ' data info ', '--'*10)
print('train_set size: {}, labels_set size: {}'.format(len(train_set),len(labels_set)))
print('the number of classes: {}'.format(classes_num))
print('-'*10, '-----------', '--'*10)

model = Model(input_size, hidden_size, num_layers, num_classes).to(device)
#model = Model(input_size, hidden_size, num_layers, num_classes)
#model = nn.DataParallel(model, device_ids=[0,1,2,3])
#model = model.cuda()

seq_dataset = TensorDataset(torch.tensor(train_set, dtype=torch.float), torch.tensor(labels_set))

dataloader = DataLoader(seq_dataset, batch_size=batch_size, shuffle=True, drop_last = True)


#temp for max # using nn.Sigmoid
accurate = []
def temp_max_idx(t, label):
	temp = []
	label_cpu = list(label.cpu().detach().numpy())
	for label_idx, e in enumerate(t.cpu()):
		list_e = list(e.detach().numpy())
		sum_v = sum(list_e)
		for idx, v in enumerate(list_e):
			list_e[idx] = round(list_e[idx]/sum_v, 20) # :(
                        
		max_idx, max_v = 0, 0                        
		for idx, v in enumerate(list_e):
			if v > max_v:
                            max_v = v
                            max_idx = idx
		#print(label_cpu[label_idx], max_idx)
		accurate.append(label_cpu[label_idx] == max_idx)
		temp.append(tuple(list_e))
	#return temp

# no using nn.Sigmoid
# def temp_max_idx(t):
# 	temp = []
# 	for e in t:
# 		list_e = list(e.detach().numpy()) 
# 		min_v = min(list_e)
# 		gap_v = max(list_e) - min_v
# 		for idx, v in enumerate(list_e):
# 			list_e[idx] = round((list_e[idx]-min_v), 2) 
# 		sum_v = sum(list_e)		
# 		for idx, v in enumerate(list_e):
# 			list_e[idx] = round(list_e[idx]/sum_v, 2)  		
# 		temp.append(torch.tensor(list_e))
# 	return temp


# Loss and optimizer
criterion = nn.CrossEntropyLoss()
optimizer = optim.Adam(model.parameters(), lr=0.005)
print('fuck')
sigmoid = nn.Sigmoid()
# Train the model
total_step = len(dataloader)
current_lr = None
loss = None
g_output = None
accurate_history = []
for epoch in range(num_epochs):  # Loop over the dataset multiple times
    for step, (seq, label) in enumerate(dataloader):
        # Forward pass
        seq = seq.clone().detach().view(-1, window_size, input_size).cuda()

        output = model(seq).cuda()
        g_output = output.cpu()
        label = label.cuda()      
        # print(seq)
        # print('----------\n',output, '-------------------\n', label, '\n')
        loss = criterion(output, label).cuda()
        
        # Using nn.Sigmoid
        if epoch % (num_epochs//8) == 0:
            temp_max_idx(sigmoid(output), label)
            accurate_num = accurate.count(True)
            all_label = len(accurate)            
            accurate_history.append((epoch, accurate_num/float(all_label)))
            #print('------- \n----out:\n', temp_max_idx(sigmoid(output), label))
        # No using nn.Sigmoid
        #if epoch > 390: print('---- label: {} ------- \n----out:\n'.format(label), temp_max_idx(output) )
        #if epoch == 2990: break
        # Backward and optimize
        optimizer.zero_grad()
        loss.backward(retain_graph=True)
        optimizer.step()
        current_lr = adjust_lr(0.005, optimizer, epoch, 100, min_lr = 0.00001)    
    if epoch%40 == 0:
        if current_lr is not None:
            print('[INFO] lr = ', current_lr)
        if loss is not None:
            print('Epoch [{}/{}], Train_loss: {:.4f}'.format(epoch + 1, num_epochs, loss.item()))
    #writer.add_scalar('train_loss', loss.item(), epoch + 1)
    # if (step + 1) % 100 == 0:
    #     print('Epoch [{}/{}], Step [{}/{}], Train_loss: {:.4f}'.format(epoch + 1, num_epochs, step + 1, total_step,
    #                                                                    loss.item()))
    #     writer.add_scalar('train_loss', loss.item(), total_step * epoch + step + 1)
torch.save(model.state_dict(), 'model-0.3' + '.pt')
torch.save(model, 'model-total-0.3' + '.pt')

for e in accurate_history:
    print(e)
accurate_num = accurate.count(True)
all_label = len(accurate)
try:
    print('accurate num: {},  total_smaple: {}, accuracy: {}'.format(accurate_num, all_label, accurate_num/float(all_label)))
except:
    print('fuck the zero')
# writer.close()
import torchviz as viz
with open('gru3.dot', 'w+') as f:
    for e in viz.make_dot(g_output, params=dict(model.named_parameters())):
        #print(e)
        f.write(e+'\n')
print('----- [model] -----\n', model)        
print('Finished Training')
