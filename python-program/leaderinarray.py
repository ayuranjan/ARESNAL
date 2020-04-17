#leader is a number which is greater than all the numbers on its right side


#naive approach 

l = [7,10,4,3,6,5,2]

def leader(arr):
    
    for i in range(0,len(l)):
        flag =  True
        for j in range(i + 1 ,len(l)):
            if l[i] < l[j]:
                flag = False
                break
        if flag == True :
            print(l[i])
#leader(l)


# approach 2  ....last element is always a leader , traverse from last and if the element is greater than the current leader it will also be a leader 
def leader2(arr,n):
    lead = arr[n-1]
    print(lead)
    for i in range(n-2 , 0,-1):
        if arr[i] > lead :
            lead = arr[i]
            print(lead)
leader2(l,len(l))
