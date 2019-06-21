import torch
import torch.nn as nn
import torch.optim as optim
from tensorboardX import SummaryWriter
from torch.utils.data import TensorDataset, DataLoader

# Device configuration
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
# Hyperparameters
window_size = 2
input_size = 10
hidden_size = 20
num_layers = 2
num_classes = 10
num_epochs = 400
batch_size = 4

class Model(nn.Module):
    def __init__(self, input_size, hidden_size, num_layers, num_keys):
        super(Model, self).__init__()
        self.hidden_size = hidden_size
        self.num_layers = num_layers
        self.lstm = nn.LSTM(input_size, hidden_size, num_layers, batch_first=True)
        self.fc = nn.Linear(hidden_size, num_keys)

    def forward(self, input):
        h0 = torch.zeros(self.num_layers, input.size(0), self.hidden_size)
        c0 = torch.zeros(self.num_layers, input.size(0), self.hidden_size)
        out, _ = self.lstm(input, (h0, c0))
        out = self.fc(out[:, -1, :])
        return out


model = Model(input_size, hidden_size, num_layers, num_classes)

raw_data = [i for i in range(10)]
data = []
for e in range(10):
	temp = [0 for i in range(10)]
	temp[e] = 1
	data.append(temp)

inputs = [data[i:i+2] for i in range(8)] * 15
#outputs = data[2:] * 5
outputs = [i for i in range(2, 10)] * 15
seq_dataset = TensorDataset(torch.tensor(inputs, dtype=torch.float), torch.tensor(outputs))
dataloader = DataLoader(seq_dataset, batch_size=batch_size, shuffle=True)


#temp for max # using nn.Sigmoid
def temp_max_idx(t):
	temp = []
	for e in t:
		list_e = list(e.detach().numpy())
		sum_v = sum(list_e)
		for idx, v in enumerate(list_e):
			list_e[idx] = round(list_e[idx]/sum_v, 2)
		temp.append(torch.tensor(list_e))
	return temp

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
optimizer = optim.Adam(model.parameters(), lr=0.05)
print('fuck')
sigmoid = nn.Sigmoid()
# Train the model
total_step = len(dataloader)
for epoch in range(num_epochs):  # Loop over the dataset multiple times
    for step, (seq, label) in enumerate(dataloader):
        # Forward pass
        seq = seq.clone().detach().view(-1, window_size, input_size)

        output = model(seq).view(4, 10)
        # print(seq)
        # print('----------\n',output, '-------------------\n', label, '\n')
        loss = criterion(output, label)

        # Using nn.Sigmoid
        if epoch > 390: print('---- label: {} ------- \n----out:\n'.format(label), temp_max_idx(sigmoid(output)) )
        # No using nn.Sigmoid
        #if epoch > 390: print('---- label: {} ------- \n----out:\n'.format(label), temp_max_idx(output) )
        if epoch == 400: break
        # Backward and optimize
        optimizer.zero_grad()
        loss.backward()
        optimizer.step()
    print('Epoch [{}/{}], Train_loss: {:.4f}'.format(epoch + 1, num_epochs, loss.item()))
    #writer.add_scalar('train_loss', loss.item(), epoch + 1)
    # if (step + 1) % 100 == 0:
    #     print('Epoch [{}/{}], Step [{}/{}], Train_loss: {:.4f}'.format(epoch + 1, num_epochs, step + 1, total_step,
    #                                                                    loss.item()))
    #     writer.add_scalar('train_loss', loss.item(), total_step * epoch + step + 1)
torch.save(model.state_dict(), 'model' + '.pt')
# writer.close()
print('Finished Training')
