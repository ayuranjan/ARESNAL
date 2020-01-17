balance = float(input("Enter your balance"))
withdrawal = 500
class MyError(Exception):
    def __init__(self,val):
        self.val = val

try:
    if balance > withdrawal:
        print(balance - withdrawal)
    else :
        #raise NameError
        raise MyError("bad")
except NameError:
    print("Insuffecient Balance")

    
finally:
    print("ALWAYS INPUT WITHDRAW MONEY LESS THAN CURRENT BALANCE ") 