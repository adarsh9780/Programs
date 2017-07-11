'''this uses circular list method for implementing queue'''
from time import time

class Empty(Exception):
	pass
	
class Queue:
	capacity = 10
	
	def __init__(self):
		self.data = [None] * Queue.capacity
		self.front = 0
		self.size = 0
	
	def is_empty(self):
		return self.size == 0
		
	def enqueue(self, item):
		avail = (self.front + self.size) % len(self.data)
		self.data[avail] = item
		self.size += 1
		return self.data
	
	def dequeue(self):
		if self.is_empty():
			raise Empty("Queue is Empty")
		answer = self.data[self.front]
		self.size -= 1
		self. data[self. front] = None
		self.front = (self.front+1)%len(self.data)
		return answer
	
	def first(self):
		return self.data[0]
		
	
	def __len__(self):
		return len(self.data)
	
	def resize(self):
		copy = self.data
		cap = 2*len(self.data)
		self.data = [None] * cap
		walk = self.front
		for k in range(self.size):
			self.data[k] = copy[walk]
			walk = (walk+1)%len(copy)
		self.front = 0
		return self.data
		
		
q = Queue()
