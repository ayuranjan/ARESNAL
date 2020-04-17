# find max value of arr[j] - arr[i] where j> i 

l = [2,3,10,6,4,8,1]
max_value = -9999
for i in range(0,len(l)):
    for j in range(i+1 ,len(l)):
        diff = l[j] - l[i]
        if max_value < diff :
            max_value = diff
print(max_value)
