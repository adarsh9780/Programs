#!/usr/bin/env python3

class Node:
    def __init__(self, value, next=None): # keyword argument must be placed after arguments.
        self.value = value
        self.next = next

    def get_data(self):
        return 'data'

    def get_next(self):
        return 'next'

    def set_value(self, value):
        self.value = value
        return 'new_value'

    def set_next(self, next):
        self.next = next
        return 'new_next    '

def main():
    
    n = Node(5, 89)
    x = n
    print(n)

if __name__ == '__main__':
    main()
