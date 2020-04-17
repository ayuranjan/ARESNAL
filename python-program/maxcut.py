#given a rope of lenght n , you need to find the max no of pieces you can make such that length of every piece is in set 9a,b,c) where a,b,c are given 
def maxcut1(n,a,b,c):
    if n == 0 :
        return 0 
    elif n < 0 :
        return -1 
    res = max(maxcut1(n-a,a,b,c),maxcut1(n-b,a,b,c),maxcut1(n-c,a,b,c))
    if res == -1 :
        return -1 
    else:
        return res + 1

print(maxcut1(23,12,9,11))
print(maxcut1(5,2,5,1))