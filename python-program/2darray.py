from array import *
arr1 = array('i',[1,2,3])
#arr = linspace(0,16,6)
#arr = arange(0,16,2)
arr2 = array('i',[3,2,1])
arr =array('i',[])
n = len(arr1) -1
i =0
while i <= n:
     n1 = arr1[i]
     n2 = arr2[i]
     arr.append(n1+n2)
     i = i+ 1 

print(arr)
array1 = array('i',[2,5,6,8,3,8,33,6,8,9])
max = 0
i=0
while i< len(array1)-1:
    if max < array1[i]:
        max = array1[i]
    i =i+1


print(max)

