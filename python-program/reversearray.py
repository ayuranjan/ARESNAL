import array as a 
arr = a.array('i',[7,6,5,4,3,2,1])
for i in arr:
    print(i ,end=' ')
print('The reversed array is : ')
arr2 = a.array('i',[])

j = len(arr) -1 
while j >= 0:
    arr2.append(arr[j])
    j = j-1 
   

print(arr2)