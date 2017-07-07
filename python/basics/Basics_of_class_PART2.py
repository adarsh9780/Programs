''' This class asks user to input 10 numbers, same or different no matter, 
and outputs a list in descending order.'''

class ScoreBoard:
# NO GLOBAL VARIABLE
	def __init__(self): # Constructor
	''' Creation of 2 INSTANCE VARIABLE, 'array' and 'sorted_array' '''
		self.array = []
		self.sorted_array = []
		
	def add_score(self, no_of_items):
	''' Any vriable created inside a function, ex: 'no_of_items', 
	does not need any self keyword to be accessed inside that function.
	You can't use that variable outside of function in which it is created, or you can say that variable
	has scope only inside the function.'''
		while no_of_items != 0:
			item = int(input())
			self.array.append(item)
			no_of_items = no_of_items-1
		return self.array
	
	def sort(self):
		while len(self.array) != 0:
			self.sorted_array.append(max(self.array))
			self.array.remove(max(self.array))
		return self.sorted_array

score = ScoreBoard()
score.add_score(10)
print(score.array) # Instance and Global variabe can be accessed using object of class, ex: score is object of ScoreBoard.
score.sort()
print(score.sorted_array)
