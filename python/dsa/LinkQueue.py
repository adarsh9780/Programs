from LinkedList import LinkedList

class LinkQueue:
    
    def __init__(self):
        self.LinkedList = LinkedList()
        
    def enqueue(self, value):
        return self.LinkedList.add(value)
        
    def dequeue(self):
        return self.LinkedList.remove(self.LinkedList.get_last())
    
    def is_empty(self):
        return self.LinkedList.is_empty()
    
    def get_size(self):
        return self.LinkedList.get_size()
    
    def first(self):
        return self.LinkedList.first()
        
    def traverse(self):
        return self.LinkedList.traverse()
        
    def last(self):
        return self.LinkedList.get_last()
        
def main():
    l = LinkQueue()
    l.enqueue(1)
#    l.enqueue(2)
#    l.enqueue(3)
#    l.enqueue(4)
#    l.traverse()
#    print(l.is_empty())
#    print(l.get_size())
#    l.last()
#    l.dequeue()
    l.traverse()
#    print(l.first())

if __name__ == '__main__':
    main()
    
