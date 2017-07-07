import sys
#open FIRST COMMAND LINE ARGUMENT as a file.
file_to_open = open(sys.argv[1], 'r')

# select a variable to store the characters to be read.
text = file_to_open.read()

#print characters
print(text)
