'''n = 5 
fact = 1 
for i in range(1,n+1):
    fact = fact * i
print fact ,#"""
for i in range(5):
    for j in range(i):
        print ('*'),
    print'''

'''
for i in range(4,0,-1):
    for j in range(0,8-i):
        print (" "),
    for z in range(2*i-1):
        print '*',
    print 
'''

#no of digit in a number 
'''n = 78690
count = 0 
while(n != 0):
    n = n/10 
    count = count + 1
print count'''

#fibonacci using loops
'''a = 0 
n = 0
b =1 
while(n < 10):
    print(a)
    c = a + b 
    a =  b 
    b =c  
    n = n +1'''

#time complexity is O(1)  sum for first n numbers 
def model_solution(n):
    result = n * (n + 1) // 2 
    return result
p = model_solution(105)
print(p)

'''def fast_solution(n): 
    result = 0
    for i in xrange(n):
        result += (i + 1) 
    return result

j = fast_solution(105)
print(j)
'''

