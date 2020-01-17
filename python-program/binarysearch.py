list2 =[1,2,5,7,9,11,25,67,77,89,94,101]
num = int(input("Enter the number to be searched:"))
n = len(list2)
min =0 
max =n-1
for i in range(n):
    avg = (min + max)//2
    if num == list2[max] :
        print("Number found at : ",max)
        break
    elif num == list2[min] :
        print("Number found ",min)
        break
    elif num == list2[avg]:
        print("number found ",avg)
        break
    elif num > list2[avg] :
          min = avg
       
    elif num <list2[avg] :
        max = avg
else :
    print("Nmuber not found ")

