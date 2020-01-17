class A:
    q =11
    def __init__(self,x):
        self.p = 9
        print("A")
        print(x)
    def keyo(self):
        print("ayush")
class B(A):
    def __init__(self):
        b = 10
        super().keyo()
        super().__init__(11)
        c = A.q + b
        d = self.p + b 
        print(d)
        print(c)
        print("B")

b = B()

