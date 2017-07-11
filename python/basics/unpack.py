import sys

def avegrades(grades):
	first, *middle, last = grades
	avg = sum(middle)/len(middle)
	print(avg)

avegrades([1,2,3,4,5,6,7,8,9,10])
