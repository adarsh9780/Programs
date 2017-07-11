from stack import ArrayStack
import sys

def reverse():
	S = ArrayStack()
	original = open(sys.argv[1])
	for line in original:
		S.push(line)
	original.close()
	
	output = open(sys.argv[1], 'w')
	while not S.is_empty():
		output.write(S.pop())
	output.close()
	
reverse()
