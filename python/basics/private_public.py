'''
Member functions and Data Members which are declared with a beginnig 
sign of '_'/single undersocre are Protected members of class and thus can only be used 
by inherited class, while , if begnning with '__'/double underscore are Private members.

'''
class BaseClass():
    def __hi(self): # private members
        print("hi")
        
    def _hia(self): #protected members
        print("hey")
      '''
      while names those which begin with double undercore 
      and ends with double undersocre are special memebers.
      '''  
    def __hi__(self):
        print("whoa")
        
b = BaseClass()
#print(b.__hia()) # ERROR
#print(b._hia()) # ERROR

print(b.__hi__())
