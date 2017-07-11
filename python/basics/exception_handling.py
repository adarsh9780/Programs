while True:
	try:
		integer = int(input("Enter any integer:"))
		print("wow!! you just eneterd", integer)
		break
	# you can use more than one except statement
	except ValueError:
		print("Make sure to enter an integer!!!")
