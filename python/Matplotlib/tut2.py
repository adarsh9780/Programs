import matplotlib.pyplot as plt
import numpy as np

#arguments are shape: 1=row; 100=columns
x = np.random.rand(100)
y = np.cos(x)

#x2 = np.random.rand(100)
#y2 = np.sin(x2)

#ids = [var for var in range(len(x))]

bins = [0,1,2,3,4,5]

#plot x & y
#plt.xlabel("Items--->")
#plt.ylabel("Squared--->")
#plt.title("Quadratic function")
#plt.plot(x, y, label='Quadratic Function')

#plot x2 & y2
#plt.xlabel("Items--->")
#plt.ylabel("Sin(X)")
#plt.title("Sine Function")
#plt.plot(x2, y2, label="Sine Function")

#bars
#plt.bar(ids, x, label='Bars1', color='pink')
#plt.bar(x2, y2, label='Bars2', color='green')

#histograms shows distribution
#plt.hist(x, bins, histtype='bar', rwidth=0.8)

plt.scatter(x, y, label='Scatter plot of cos function', marker='*')

#legends
plt.legend()

#show the figure
plt.show()

