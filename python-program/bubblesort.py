list3 = [1,9,5,3,19,27,14,30,4]
n = len(list3) 
for i in range(n):
    for j in range (n-1):
        if list3[j]  >list3[j+1]:
            list3[j],list3[j+1] =list3[j+1],list3[j]
        else:
            pass
print(list3)