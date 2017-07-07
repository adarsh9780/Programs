# inefficient method.
from time import time
class Empty(Exception):
	pass
	
class Queue:
	def __init__(self):
		self._data = []
		
	def is_empty(self):
		return len(self.data) == 0
	
	def enqueue(self, item):
		return self._data.append(item)
		
	def dequeue(self):
		if self.is_empty():
			raise Empty("Queue is Empty")
		return self._data.pop(0)
		
	def first(self):
		if self.is_empty():
			raise Empty("Queue is Empty")
		return self._data[0]
		
	def __len__(self):
		return len(self._data)
		
q = Queue()
