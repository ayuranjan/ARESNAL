class computer:
    def __init__(self):
        self.name = "Ayush"
        self.age = 20
    def compare(self,other):
        if self.age ==other.age:
            return True
        else:
            return False

c1 = computer()
c1.age =19
c2 = computer()

if c1.compare(c2):
    print("Same")
else:
    print("Different")