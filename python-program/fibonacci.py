import math
def fibo(n):
    if n == 0:
        return 0
    if n == 1 :
        return 1 
    else:
        return fibo(n-1) + fibo(n-2)

# print(fibo(7)) for nth(7th ) fibo number
for i in range(7):
    print(fibo(i))
#A number is Fibonacci if and only if one or both of (5*n^2 + 4) or (5*n^2 – 4) is a perfect square
num = int(input("Enter the number :"))
eq1 =(5 *(num**2 )+ 4 )
eq2 = (5 *(num**2) - 4 )
sqr1 = int(math.sqrt(eq1))
sqr2 = int(math.sqrt(eq2))
if eq1 == (sqr1*sqr1) or eq2 == (sqr2 * sqr2):
    print("IT's a fibonacci number")
else :
    pass

