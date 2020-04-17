#left rotate by 1 
def rotateby1(arr):
    temp = arr[0]
    for i in range(1,len(arr)):
        arr[i-1] = arr[i]
    arr[len(arr) -1 ] = temp
    return arr
l1 = [1,2,3,4,5]
#print(rotateby1(l1))

# rotate by d using rotate by 1 
def rotatebyd(arr,d):
    for i in range(0,d):
        rotateby1(arr)
    return arr


# print(rotatebyd(l1,3))

# rotate by d - METHOD 2 ,her we copy first d elements in array and move elements of the array by d position 
def rotatebyd2(arr,d):
    l2 = []
    index = 0
    for i in range(0,d):
        l2.append(arr[i])
    for i in range(d, len(arr)):
        arr[i-d] = arr[i]
    for i in range(len(arr)- d , len(arr)):
        arr[i] = l2[index]
        index = index +1 
    return arr
#print(rotatebyd2(l1,3))


#METHOD 3 using reversal algo 

def rotateleft(arr,n,d):
    reverse(arr,0,d-1)
    reverse(arr,d,n-1)
    reverse(arr,0,n-1)
    return arr
def reverse(arr,low,high):
    while(low < high ):
        arr[low],arr[high] = arr[high],arr[low]
        low = low + 1
        high = high +1 
    
print(rotateleft(l1,len(l1),3))