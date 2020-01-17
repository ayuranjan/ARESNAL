from numpy import *
arr1 = ([ [1,6] ,[7,5]])
arr2 =([ [3,5],[4,8]])
res =([[0,0],[0,0]])
for i in range(2):
    for j in range(2):
        
        for k in range(2):
            res[i][j] += arr1[i][k] * arr2[k][j]

print(res)
