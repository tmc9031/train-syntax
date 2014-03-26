#!/usr/bin/env python3

from sys import getrefcount

a = [1, 2, 3]
print(getrefcount(a))

b = a
print(getrefcount(b))

# ##
a = [1, 2, 3]
b = a
print(getrefcount(b))

del a
print(getrefcount(b))

# ##
a = [1, 2, 3]
b = a
print(getrefcount(b))

a = 1
print(getrefcount(b))
    

a = [123]
a.append(a)
print(a)
print(getrefcount(a))
    
    
def decorator(F):
    def new_F(a, b):
        print("input", a, b)
        return F(a, b)
    return new_F

class from_obj(object):
    def __init__(self, to_obj):
        self.to_obj = to_obj

b = [1, 2, 3]
a = from_obj(b)
print(id(a.to_obj))
print(id(b))

# get square sum
@decorator
def square_sum(a, b):
    return a ** 2 + b ** 2

# get square diff
@decorator
def square_diff(a, b):
    return a ** 2 - b ** 2

print(square_sum(3, 4))
print(square_diff(3, 4))

# if __name__ == '__main__':
#    main()