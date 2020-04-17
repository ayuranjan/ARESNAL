#sum of digits of a number using recursion 

def sum(n ):
    s =0 
    if n == 0 :
        return 0
    else:
        s = s + (n % 10 )
        n = int(n/10)
        return s + sum(n)

def sum2(n):
   
    if n <10:
        return n 
    else :
       return sum2(int(n/10)) + (n %10)


print(sum2(5784))


