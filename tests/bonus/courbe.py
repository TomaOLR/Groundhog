from pylab import *
import numpy as np
import matplotlib.pyplot as plt

f = open('temp.txt', "r")
tab = f.read();
tab = tab.split('\n')

x = []
y = []

for i in range(len(tab) - 1):
    x.append(i)
    y.append(float(tab[i]))

title("Temperature variation")
xlabel("number of days")
ylabel("Temperature °C")
plt.plot(x, y, 'o:', linewidth=2, label="temperature")
plt.legend()
plt.show()
