from operations import *
num = int(input("Press 1 for Add ,2 For Sub , 3 For Multiply and 4 For Divide :"))
print(num)
a = int(input("Enter the 1st number:"))
b =int(input("Enter the 2nd number:"))
while num != -1:
    if num == 1 :
        output = add(a,b)
        print(output)
    elif num== 2 :
        output = sub(a,b)
        print(output)
    elif num==3 :
        output =mul(a,b)
        print(output)
    elif num== 4 :
        output = div(a,b)
        print(output)
    num =int(input('Press 1 for Add ,2 For Sub , 3 For Multiply, 4 For Divide and -1 to exit :'))


