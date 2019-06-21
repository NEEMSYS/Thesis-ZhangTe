import torch
import torch.nn as nn
from torch.utils.data import TensorDataset, DataLoader

inp = torch.randn(5, 3, 10)
rnn = nn.LSTM(10, 20, 2)

h0 = torch.randn(2, 3, 20)
c0 = torch.randn(2, 3, 20)


class RNN(nn.Module):
    def __init__(self):
        super(RNN, self).__init__()

        self.nn = nn.LSTM(
            input_size = 10,
            hidden_size = 20,
            num_layers = 1,
            batch_first = True
        )

        self.out = nn.Linear(20, 10)

    def forward(self, x):
        r_out, (h_n, h_c) = self.rnn(x, None)

        out = self.out(r_out[:,-1,:])
        return out

rnn = RNN()
print(rnn)
optimizer = torch.optim.Adam(rnn.parameters(), lr=0.01)
loss_func = nn.CrossEntropyLoss()

seq_dataset = torch.range(1, 100).reshape(50, 2)
dataloader = DataLoader(seq_dataset, batch_size=4, num_workers = 5, shuffle=False, drop_last=True)
print(seq_dataset)
print(dataloader)
if __name__ == '__main__':
    for idx, (x, y) in enumerate(dataloader):
        print(idx, (x, y))
#for epoch in range(10):
#    for step, x in enumerate(inp):
#        print(step, x)
'''
        output = rnn(x)
        loss = loss_func(output, y)
        optimizer.zero_grad()
        loss.backward()
        optimizer.step()
    print('epoch: {}'.format(epoch))
'''
