'''This will create a list of tuples using two list'''
list1 = ['adarsh', 'anmol', 'sehaj']
list2 = ['maurya', 'hans', 'deep Singh']

names = zip(list1, list2)

for a, b in names:
	print(a, b)
