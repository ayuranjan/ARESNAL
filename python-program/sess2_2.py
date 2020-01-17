class toll_booth:
    total_cars =0
    total_amount =0
    def paying_car(self):
        self.total_cars = self.total_cars + 1 
        self.total_amount = self.total_amount + 1
    def non_paying_car(self):
        self.total_cars = self.total_cars + 1
    def main(self,no):
        if no == 1 :
            self.paying_car()
        elif no == 2:
            self.non_paying_car()
        elif no == 3 :
            print(self.total_cars,self.total_amount)

    
        

c = toll_booth()
c.main(1)
c.main(1)
c.main(2)
c.main(1)
c.main(2)
c.main(3)
