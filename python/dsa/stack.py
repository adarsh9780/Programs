class Empty(Exception):
	pass

class ArrayStack():
	def __init__(self):
		self._data = []
	
	def __len__(self):
		return len(self._data)
		
	def is_empty(self):
		return len(self._data) == 0

	def push(self, item):
		self._data.append(item)

	def pop(self):
		if self.is_empty():
			raise Empty('Stack is empty')
		return self._data.pop()

	def top(self):
		if self.is_empty():
			raise Empty('Stack is empty')
		return self._data[-1]
		
def main():
    a = ArrayStack()
    a.push(4)
    a.push(5)
    a.push(6)
    a.push(7)
    print(a.pop())
    
if __name__ == '__main__':
    main()
