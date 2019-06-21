# -*- coding: utf-8 -*-
"""
Created on Fri Aug 31 19:10:27 2018

@author: tete
"""

# -*- coding: utf-8 -*-
from matplotlib import pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import Axes3D
import math
fig = plt.figure()
ax = Axes3D(fig)
X = np.arange(-4, 4, 0.25)
Y = np.arange(-4, 4, 0.25)
X, Y = np.meshgrid(X, Y)
R = np.sqrt(X**2 + Y**2 + X + Y)
Z = ( np.abs(X**3) + np.abs(Y**3))**2
#Z = np.log(1 + 1/(np.e**(X*Y + X*(Y**2)+Y**3+(Y**3)*X+Y**4)))
#Z = X*Y + X*(Y**2)+Y**3+(Y**3)*X+Y**4
ax.plot_surface(X, Y, Z, rstride=1, cstride=1, cmap='rainbow')
 
plt.draw()
plt.pause(10)
#plt.savefig('3D.jpg')
plt.show()
plt.close()