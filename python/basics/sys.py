#!/usr/bin/python -tt
import sys

def hello(file_name):
	read_file = open(file_name, 'rU')
	for lines in read_file:
	    print lines

# main calls the function 'hello' and whatever argument we will pass on
# command line will gets printed.
# by default argv[0] refers to the script name itself.
# so argv[1] will refer to first argument we will pass in our command line.

def main():
	hello(sys.argv[1])

if __name__ == '__main__':
  main()
# open 'terminal'>> type 'python sys.py adarsh'
# result will be 'hello adarsh'
