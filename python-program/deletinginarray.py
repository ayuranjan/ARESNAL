import array as a 
arr = a.array('i',[7,6,5,4,3,2,1])

index = 2 
while index < len(arr)-1:
    n = arr[index+1]
    #print(n)
    arr[index] = n
    index = index +1

for i in range(len(arr)-1):
    print(arr[i])

