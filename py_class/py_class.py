#!/usr/bin/env python3
'''
Created on Aug 26, 2014

@author: ubuntu
'''

class Parent(object):
    c_bCry = False  # class-level variable
    c_bAdult = True  # class-level variable

    def __init__(self, name):
        print('Parent name:', name)
        self.o_cName = name
        # NOTE: 注意到类中和对象中各有一个 c_bAdult。一个为 True， 一个为 False。
        # 所以我们在查找 oParent.c_bAdult 的时候，会先查到对象的__dict__的值，也就是 False
#         self.c_bAdult = False

    def getName(self):
        print('Parent am:', self.o_cName)

    def getCry(self):
        print('Parent often Cry:', self.c_bCry)
    def getAdult(self):
        print('Parent is Adult:', self.c_bAdult)

class Child(Parent):
    c_bCry = True
    c_bAdult = False

    def __init__(self, name):
        print('Child name:', name)
        self.o_cName = name

    def getName(self):
        print('Child am:', self.o_cName)

def main():
    print(Parent.__dict__)
    oParent = Parent('TGD')
    print(oParent.__dict__)

    oParent.getName()
    print('id:', hex(id(oParent.o_cName)))
    oParent.getCry()
    print('id:', hex(id(oParent.c_bCry)))
    oParent.getAdult()
    print('id:', hex(id(oParent.c_bAdult)))
#     print('type:', type(oParent.c_bAdult))
    print('')


    print(Child.__dict__)
    oChild = Child('TMC')
    # NOTE: modify class-level variable can impress object
#     Child.c_bCry = False
    # NOTE: modify object's class-level variable only mutable can impress object
    oChild.c_bCry = False
    print(oChild.__dict__)

    oChild.getName()
    print('id:', hex(id(oChild.o_cName)))
    oChild.getCry()
    print('id:', hex(id(oChild.c_bCry)))

    oChild.getAdult()
    # NOTE: >>> Parent is Adult: False
    # getAdult() inherit from Parent, but c_bAdult match self first
    print('id:', hex(id(oChild.c_bAdult)))
    print('')

    # NOTE: object attr can create dynamicly
    oChild.xxx = True
    print('xxx:', oChild.xxx)
    print(oChild.__dict__)  # >>> {'xxx': True, 'o_cName': 'TMC'}
    print(oChild.__class__.__dict__)
    print(oChild.__class__.__base__.__dict__)
    print('')


    oChild2 = Child('TMC2')
    print(oChild2.__dict__)
    # NOTE: oChild.c_bCry = False do NOT impress oChild2
    oChild2.getCry()
    print('id:', hex(id(oChild2.c_bCry)))

    # NOTE: use class-level variable also do NOT need create object
    print('Child.c_bCry:', Child.c_bCry)

if __name__ == '__main__':
    main()
