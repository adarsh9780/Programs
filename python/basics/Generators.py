'''
1.) Generators are used to generate iterators.
2.) By default python offers iterator methods '__iter__' and '__next__'
	for looping through a object.
3.) Generators uses 'yield' method for returning data.'''

#Method1: at a time only method will work so please hash tag the method which you won't use.
def Reverse(*args, **kwargs):
	for item in range(len(data)-1, -1, -1):
		yield data[item]
		
def main():
	rev = Reverse('adarsh maurya') # Reverse method generates/returns a iterator, using 'yield' method.
	for char in rev:
		print(char)
	
if __name__ == '__main__':
	main()
	
# Method2
def main():
	data = "adarsh maurya"
	rev = (data[item] for item in range(len(data)-1, -1, -1))
	#for char in rev:
	#	print(char)
		
	print(next(rev)) # this will generate the first item from generator
	print(next(rev)) # this will generate the 2nd item from generator.
	print(next(rev)) # and so on.
	print(next(rev))
	
	# you can convert generator into list by following:
	print(list(rev))
		
if __name__ == '__main__':
	 main()
	 
'''
1.) LIST COMPREHENSION returns a list itself but GENERATOR returns 
	an iterable object.
2.) Latter is more efficient in terms of memory management.
3.) Generator does not support SLICING and INDEXING.
4.)	Generators are used when all we have to do is iterate once.
5.) List = list(generator)
'''
