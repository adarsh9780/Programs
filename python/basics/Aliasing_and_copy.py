'''
Alaising is when you modify one object and it also modifies the other object
to which they both refrence.
'''

a = [1,2,3,4,5]
b = a # Aliasing
b[0] = 100
print(a[0]) # will print 100

'''
Copy enables us to modify to objects independently if both are refrenecing the same objects.
'''

a = [1,2,3,4,5]
b = list(a)
b[0] = 100
print(a[0]) # will print 1

'''
Another way to make a copy
''' 
for _ in range(len(a)):
    b[_] = a[_]
    
'''
List Comprehension is another way to make a copy
'''
b = [x fr x in a]

#'''
#Special Case
#'''
#a = [122, 'str', [100], [adarsh]]
#b = list(a)
#b[0]
