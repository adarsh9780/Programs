array= [1,2,3,4,5,6,7,8]

def linear_sum(array, n):
	if n == 0:
		return 0
	else:
		return linear_sum(array, n-1) + array[n-1]

array_sum = linear_sum(array, len(array))
print(array_sum)
