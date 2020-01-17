class ParentClass(object):
    
    def __init__(self):
        self.x = "auis"

    def test(self):
        print ('Im in parent class')


class ChildClass(ParentClass):

    def test(self):
        #       super(ChildClass,self).test()
        print( "Value of x = "+ self.x)


x = ChildClass()
x.test()