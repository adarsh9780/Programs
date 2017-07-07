import matplotlib.pyplot as plt
import numpy as np

slices = [8,8,4,4]
sleeping = [8,7,6,3,12]
classes = [8,1,0,12,10]
game = [3,3,1,1,2]
others = [5,13,17,8,0]
activities = ['sleeping', 'classes', 'games', 'others']
colors = ['red', 'green', 'yellow', 'pink']

plt.pie(slices, labels=activities, colors=colors, autopct='%1.1f%%', explode=(0, 0.3, 0, 0))
#explode will pull out a slice from pie
#autopct will add percentage to each slice

plt.show()

