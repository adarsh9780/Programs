import matplotlib.pyplot as plt
import numpy as np

days = [1,2,3,4,5]
sleeping = [8,7,6,3,12]
classes = [8,1,0,12,10]
game = [3,3,1,1,2]
others = [5,13,17,8,0]

#plt.stackplot(x-axis, y-axis1, y-axis2, y-axis3 and so on)
plt.stackplot(days, sleeping, classes, game, others, colors=['black', 'blue', 'green', 'pink'])

#we don't have any label with stack plots, so it's kind of difficult
#to identify which color represent what. luckily we can overcome this using empy plots.
plt.plot([], [], color='black', label='sleeping', linewidth=5)
plt.plot([], [], color='blue', label='classes', linewidth=5)
plt.plot([], [], color='green', label='game', linewidth=5)
plt.plot([], [], color='pink', label='others', linewidth=5)
plt.legend()

plt.show()

