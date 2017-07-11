#!/usr/bin/env python3
'''
Linked List Implementations.
Methods:
1.) add(value) : add the value at the beginning.
2.) insert(value, position any other than beginning.): add at any position other than beginning.
3.) find(value) : returns true, if value is present.
4.) is_emtpy() : returns true if list is empty(no element).
5.) traverse() : print every element.
6.) get_size() : returns number of elements present.
7.) remove(value) : removes first instance.
'''
class Node:
	def __init__(self, value, next=None): # keyword argument must be placed after arguments.
		self._value = value
		self._next = next # takes an instance of Node class

	def get_data(self):
		return self._value

	def get_next(self):
		return self._next

	def set_value(self, value):
		self._value = value
		return self._value

	def set_next(self, next):
		self._next = next
		return self._next

class LinkedList:
	def __init__(self):
		self._head = None
		self._size = 0
		self._last = None
		
# Add at beginnig.
	def add(self, value):
		node = Node(value, self._head) # Makes a Node with next element pointing to current head.
		self._head = node # Set current node as head.
		self._size += 1 # increment size with every addition of an node.
		
# Add at any position other than beginning.
	def insert(self, value, position):
		this_node = self._head
		prev_node = None
		# prev_node should be one less than 'position' and this_node should be 1 greater.
		while position != 1:
			prev_node = this_node
			this_node = this_node.get_next()
			position -= 1
		# Make a new node having refrence to the same value as prev_node is referring to.
		node = Node(value, prev_node.get_next())
		# Now set the prev_node refrence to new node.
		prev_node.set_next(node)
		self._size += 1

# Remove the first instance of value.
	def remove(self, value):
		this_node = self._head
		if self.is_empty() == None:
			return("None")
		prev_node = None
		while this_node:
		# find the node to be removed.
			if this_node.get_data() == value:
				if prev_node:# check if node to be removed is head or not.
					prev_node.set_next(this_node.get_next())
				else:
					self._head = this_node.get_next()
				self._size =- 1
				return True
			else:
			#if not found, increment the node.
				prev_node = this_node
				this_node = this_node.get_next()

	def find(self, value):
	# same as remove method, instead of removing it returns the matched value.
		this_node = self._head
		prev_node = None
		while this_node:
			if this_node.get_data() == value:
				return True
			else:
				this_node = this_node.get_next()

	def traverse(self):
	# increment evry node while printing it.
		this_node = self._head
		if self._head == None:
			print('None')
		while this_node:
			if this_node.get_next() == None:
				print(this_node.get_data())
				break
			else:
				print(this_node.get_data())
				this_node = this_node.get_next()

	def get_size(self):
	# Find the number of elements.
		return self._size

	def is_empty(self):
	# check if the list is emtpy.
		return self._size == 0
		
	def first(self):
		return self._head.get_data()
			
	def get_last(self):
		this_node = self._head
		while this_node.get_next() != None:
			this_node = this_node.get_next()
			
		self._last = this_node
		return self._last.get_data()
		
def main():
	l = LinkedList()
#    l.add("adarsh")
	l.add(3)
	l.add(4)
	l.add(5)
#    l.remove(3)
#    print(l.get_size())
#    print(l.is_empty())
#    l.insert(5, 5)
#    l.remove(5)
#    l.remove(5)
#    print(l.find(5))
#    l.traverse()
	print(l.get_last())
	print(l.first())

if __name__ == '__main__':
	main()