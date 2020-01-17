class electricity_bill:
    def __init__(self,no):
        self.number = no
class domestic_connection(electricity_bill):
    def calculation(self,unitprice):
        #super().__init__()
        cost = self.number * unitprice
        print(cost)
d = domestic_connection(7)
d.calculation(10)