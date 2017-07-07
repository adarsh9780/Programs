size_of_array = int(input())
array = list()
i = 0
while i != size_of_array:
	array_item = input()
	array.append(array_item)
	i += 1

array.reverse()
i = 0
while i != size_of_array:
	print(array[i])
	i += 1
