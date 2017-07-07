'''
1.) This example shows the functionality of 'super' method.

2.) If you are inheriting from one class, then the class inherited
	is known as PARENT CLASS, and the one who is inheriting is BASE CLASS.

3.) Now PARENT class may have some methods(assuming it have), as well as BASE class too.

4.) Inside one of methods(BASE CLASS) you actually want to use method from PARENT CLASS, 
	then use 'super' method followed by '.' and then followed by name of the method you want to use
	from PARENT CLASS.

5.) Using 'super' method you can actually call multiple methods of PARENT CLASS.'''
class Dog:
	def bark(self):
		print("bark")
	def meww(self):
		print("I can meww too")
		
class Cat(Dog):
	def mew(self):
		print("i dont know how to do it, but i can")
		super().bark()
		super().meww()
		
cat = Cat()
cat.mew()
