def getwater(arr,n):
    res = 0
    for i in range(1,n-1):
        lmax = arr[i]
        for j in range(0,i):
            lmax = max(lmax,arr[j])
        rmax = arr[i]
        for j in range(i+1,n):
            rmax = max(rmax,arr[j])
        res = res + min(lmax,rmax) - arr[i]
    return res 
arr = [3,0,1,2,5] 
print(getwater(arr,len(arr)))