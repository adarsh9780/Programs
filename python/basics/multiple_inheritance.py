class Father:
	def MiddleName(self):
		print("Kumar")

# use parentheses for inheritance.
class Mother():
	def LastName(self):
		print("Maurya")

class Child(Father, Mother):
	def FirstName(self):
		print("Adarsh")
		
adarsh = Child()
adarsh.FirstName()
adarsh.MiddleName()
adarsh.LastName()

'''MULTIPLE INHERITANCE: Even though Child class has no function named
LastName and MiddleName but since due to it's inheritance from both Father and Mother class
, it can use LastName and MiddleName function from them. '''

adarsh.LastName() # from parent class
