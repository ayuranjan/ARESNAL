#we have to find the number of distinct common element between 2 arrays  assuming the first array has larger length 
a = [10,5,20,15,30,30,5]
b=[30,5,80,15,30]
count = 0 
for i in range(len(a)):
    flag =True
    for j in range(i-1,-1,-1):
        if a[j] == a[i]:
            flag = False
            break
    if flag == True:
        for j in range(len(b)):
            if a[i] == b[j]:
                count = count + 1 
                break
print(count)