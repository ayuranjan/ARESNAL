p = int(input("Enter the value of Principle :"))
r = int(input("Enter the Rate of Interest:"))
n = int(input("Enter the Time period"))
print("The Compound interest of The amount will be :",end='')
c = p((1 + r/100 )**n)
print(c)