import matplotlib.pyplot as plt; plt.rcdefaults()
import numpy as np
import matplotlib.pyplot as plt
 
 
# Example data
people = ('Tom', 'Dick', 'Harry', 'Slim', 'Jim')
y_pos = np.arange(len(people))
performance = 3 + 10 * np.random.rand(len(people))
print '>>', performance
print '--', y_pos
error = np.random.rand(len(people))
 
#barh(bottom, width, height=0.8, left=0, **kwargs)
plt.barh(y_pos, performance, xerr=error, height=0.8,align='center',alpha=0.4)
plt.yticks(y_pos, people)
plt.xlabel('Performance')
plt.title('How fast do you want to go today?')
 
plt.show()