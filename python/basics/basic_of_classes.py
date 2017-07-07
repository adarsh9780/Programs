'''Every function you define has one virtual parameter 'self'.
Every variable you want to access has to be accessed using 'self' keyword. 
CLASS VARABLE is UNIQUE to all instances whereas INSTANCE VARIABLE is different for every object created
We can create variable on the fly.'''

class Enemy:

	gender = "male" #class variable
	
	# initialize every thing inside '__init__'.
	#called automatically every time an instance of your class is created.
	def __init__(self, life): # "life" is instance variable.
		self.life = life
	
	#function takes a virtual parameter 'self'.
	def attack(self):
		# variable of same class can be accessed using keyword 'self'.
		self.life -= 1
		
	#function takes a virtual parameter 'self'.
	def checklife(self):
		# variable of same class can be accessed using keyword 'self'.
		print(self.life)
		
#2 copy of enemy classes namely enemy1 and enemy2 having no effect on each other.
enemy1 = Enemy(5) 
enemy2 = Enemy(10) 

print(enemy1.gender)
print(enemy2.gender)
enemy2.health = "5000k" # "health" variable on the fly.
print(enemy2.health)

#functions can be called using object
enemy1.attack()#it will reduce 'life' by 1 of enemy1.
enemy1.checklife()

enemy2.checklife()#no effect onlife of enemy2, since attck function has not been called.
