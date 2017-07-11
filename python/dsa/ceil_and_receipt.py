def divby2(num):
	return num%2

test_case = int( input() )
if test_case <= 5:
	while test_case!= 0:
		num = int( input() )
		if num <= 2048:
			count = 0
		else:
			count = 1
		while num != 0:
			rem = divby2(num)
			num = num//2
			count = count + rem
		print(count)
		test_case = test_case - 1
