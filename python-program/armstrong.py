# 371 = 3*3*3 + 7*7*7 + 1*1*1 so its an armstrong number 
num = input("Enter the number to be checked:")
length = len(num)

sum = 0
for i in range(0,length):
    sum += int(num[i])**length
if sum == int(num) :
    print("IT'S AN ARMSTRONG NUMBER ")
else:
    pass


