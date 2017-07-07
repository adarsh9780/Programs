class list:

    def __init__(self):
        self._data = [None]*10
        self._size = 0
    
    def get_size(self):
        return self._size
        
    def __len__(self):
        return len(self._data)
        
    def is_empty(self):
        return self._size == 0
        
    def insert(self, item, position):
        if self.data[position] == None
            self.data.append(item)
        else:
            
