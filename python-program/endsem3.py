#l=[]
count=[]
'''with open('file.txt','r') as f:
    for line in f:
        for word in line.split():
           l.append(word)'''
#print(l)
#print(l[2][1])

f = open('file.txt','r')
s = f.read()
l = s.split()



for i in range(0,len(l)):
    num =0
    for j in range(len(l[i])):
        if l[i][j] == 'a':
            num = num +1 
        if l[i][j] == 'e':
            num = num +1 
        if l[i][j] == 'i':
            num = num +1 
        if l[i][j] == 'o':
            num = num +1 
        if l[i][j] == 'u':
            num = num +1 
    count.append(num)
print(count)
m = max(count)
i = count.index(m)
print(l[i])




s = count.index(max(count))
print(l[s])

    