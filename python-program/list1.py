list = [56,88,90,43,12,90,57]
n = len(list)
#list[0],list[n] = list[n],list[0]
#print(list)
max =list[0]
second_max = 0
for i in range(n):
    if max < list[i]:
        max =list[i]
    else :
        pass 
print(max)
for i in range(n):
    if second_max < list[i] and  list[i] < max:
        second_max = list[i]
    else:
        pass
print(second_max)