#naive approach 
'''
l1 = [1,3,3,5,5,5,7,11,11]
l2 =[ ]
l2.append(l1[0])
for i in range(1,len(l1)):
    if l1[i] != l2[-1]:
        l2.append(l1[i])
print(l2)

'''
#2nd method( without creating a new arrray )

l1 = [1,3,3,5,5,5,7,11,11]
index = 0 
for i in range(1,len(l1)):
    if l1[i] != l1[index]:
        index = index + 1 
        l1[index] = l1[i]
del l1[index+1 :len(l1)]
print(l1,index)