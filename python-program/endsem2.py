tseats = float(input("Enter Total number of seats"))
bseats = float(input("Enter no of seats to be booked"))
try:
    if tseats > bseats:
        print(str(bseats) + " seats booked")
        print(str(tseats -bseats)+ " seats remaining")
    else :
        raise NameError
except NameError:
    print(str(bseats)+ "not available")
