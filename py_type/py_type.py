#!/usr/bin/env python3

#import os

def main():
    print("hello world\n")

    mylist = [1, 2, 3, 4]
    print(type(mylist))
    print(mylist)
    inlist = list([1, 2, 3, 4])
    print(type(inlist))
    print(inlist)
    mylist = ["1", "2", "3", "4"]
    print(type(mylist))
    print(mylist)
    inlist = list("1234")
    print(type(inlist))
    print(inlist)
    
    mytuple = (1, 2, 3, 4)
    print(type(mytuple))
    print(mytuple)
    intuple = tuple([1, 2, 3, 4])
    print(type(intuple))
    print(intuple)
    
    mydict = {1:"qwe", 2:"asd", 3:"zxc", 4:"rty"}
    print(type(mydict))
    print(mydict)
    indict = dict(a=1, b=2, c=3)
    print(type(indict))
    print(indict)  # order is not sure
    
    myset = {1, 2, 3, 3, "qwe", "'qwe'", "qwe"}
    print(type(myset))
    print(myset)  # order is not sure
    inset = set([1, 2, 3, 3, "qwe", "'qwe'", "qwe"])
    print(type(inset))
    print(inset)
    
if __name__ == '__main__':
    main()