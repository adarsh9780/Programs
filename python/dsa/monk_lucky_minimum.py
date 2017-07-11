test_case = int(input())

while test_case != 0:
	size_of_array = input()
	items_of_array = input()
	items_array = items_of_array.split()
	min_item = min(items_array)
	count_min_item = items_array.count(min_item)
	if count_min_item%2 == 0:
		print("Unlucky")
	else:
		print("Lucky")
		
	test_case = test_case-1
