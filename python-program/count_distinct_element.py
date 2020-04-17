l = [15,12,13,12,13,13,3,19,17,2,3,3,2,17]
count = 0 
flag = True
for i in range(len(l)):
    for j in range(i-1,-1,-1):
        if l[i] == l[j]:
            flag = False
            break
        else :
            flag = True
    if flag == True :
        count = count + 1
print(count) 