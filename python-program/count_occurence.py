l = [10,12,10,15,10,20,12,12]


for i in range(len(l)):
    flag = True
    count =1 
    for j in range(i-1,-1,-1):
        if l[j] ==l[i]:
            flag = False
            break
    if flag == True:
        for j in range(i+1,len(l)):
            if l[j] == l[i] :
                count = count +1 
        #print(l[i],count )


def CountFrequency(l):   
    freq = {} 
    for i in l: 
        if (i in freq): 
            freq[i] += 1
        else: 
            freq[i] = 1
    print(freq)
    #for key, value in freq.items(): 
        #print ("% d : % d"%(key, value)) 
CountFrequency(l)