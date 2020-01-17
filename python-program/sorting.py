import array as a
#arr= a.array('i',[7,12,4,15,8,96])
#newarray =sorted(arr)
#for i in newarray:
 #   print(i)
arr = a.array('i',[])
n = int(input("Enter the values: (-1 to exit) "))
while n != -1:
    arr.append(n)
    n = int(input("Enter the values: (-1 to exit) "))
for i in arr :
    print(i)

value = int(input("Enter the value to be searched:"))
for j in arr:
    if value == arr[j]:
        print(j)
        break
else:
    print("Not Found")


