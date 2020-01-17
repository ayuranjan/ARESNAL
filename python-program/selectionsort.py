list4 = [11,9,5,3,19,2]
n = len(list4)
print(n)
for i in range(n):
    min =list4[i]
    for j in range(i,n):
        if min > list4[j]:
            z = j
            min = list4[j] 
        elif min == list4[j] :
             z = i   
        else:
            pass   
   
    
   

    list4[i],list4[z] = list4[z],list4[i]


    
print(list4)