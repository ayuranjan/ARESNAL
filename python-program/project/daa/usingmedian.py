import time

def median_of_three(L, low, high):
    mid = (low+high-1)//2
    a = L[low]
    b = L[mid]
    c = L[high-1]
    if a <= b <= c:
        return b, mid
    if c <= b <= a:
        return b, mid
    if a <= c <= b:
        return c, high-1
    if b <= c <= a:
        return c, high-1
    return a, low


def quicksort(L, low, high, ascending = False): 
    result = 0
    if low < high: 
        pivot_location, result = Partition(L, low, high, ascending)  
        result += quicksort(L, low, pivot_location, ascending)  
        result += quicksort(L, pivot_location + 1, high, ascending)
    return result


def Partition(L, low, high, ascending = False):
    #print('Quicksort, Parameter L:')
    #print(L)
    result = 0 
    pivot, pidx = median_of_three(L, low, high)
    L[low], L[pidx] = L[pidx], L[low]
    i = low + 1
    for j in range(low+1, high, 1):
        result += 1
        if (ascending and L[j] < pivot) or (not ascending and L[j] > pivot):
            L[i], L[j] = L[j], L[i]  
            i += 1
    L[low], L[i-1] = L[i-1], L[low] 
    return i - 1, result

liste1 = list([5,11,13,18,12,45,33])


start = time.time()



quicksort(liste1,0,len(liste1),True)  
print('sorted:')
print(liste1) 
end = time.time()
print(end - start)