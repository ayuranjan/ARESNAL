from array import *
arr = array('i',[1,2,34,5,6,9])
sum = 0
for i in range(len(arr)):
    sum += arr[i]

print(sum)

max = arr[0]
for i in range(len(arr)):
    if max < arr[i]:
        max = arr[i]
    else:
        pass    
print(max) 

arr2 = array('i')
arr2 = arr.reverse   
print(arr2)
   