import sys

#open FIRST COMMAND LINE ARGUMENT as a file.
file_to_write = open(sys.argv[1], 'w')

#write the characters and store it in some other variable.
file_to_write.write("my name is Adarsh\n")
file_to_write.write("and i am happy.")

#close the file after writing.
file_to_write.close()
