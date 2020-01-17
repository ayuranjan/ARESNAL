import numpy as np
l = [11, 12, 13, 14, 15, 16, 17, 15,21, 11, 12, 14, 15, 16, 17]
arr = np.array(l)
print(arr)
m = np.amax(arr)
#m =arr.max()
#print(np.sort(arr)[::-1])
#print(np.sort(arr,kind="mergesort"))
print(m) 
l2 = [[1,2,4],[4,3,2]]
l3 =[[1,2,4],[4,3,2]]
arr2 = np.array(l2)
arr3 = np.array(l3)
#print(arr2)
i = np.where(21)
print(i)
#print(arr2 * arr3)
#print(np.sort(arr2,axis = 0))
#print(np.transpose(arr2))
