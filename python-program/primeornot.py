num = int(input("Enter the number :"))
for i in range(2,num):
    if(num % i == 0):
        print("The Number is Not Prime");
        break;
else :
    print("The number is prime")