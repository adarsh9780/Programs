class Parent:
	def LastName(self):
		print("Maurya")
# use parentheses for inheritance.
class Child(Parent):
	def FirstName(self):
		print("Adarsh")

adarsh = Child()
adarsh.FirstName()

'''SIMPLE INHERITANCE: Even though Child class has no function named
LastName but since due to it's inheritance from Parent class
, it can use LastName function from it. '''

adarsh.LastName() # from parent class
