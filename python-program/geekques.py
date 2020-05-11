def printNos(n):
    if n == 0 :
        return
    
    printNos(n -1 )
    print(n)
#printNos(64)

def printnos(n):
    if n == 0:
        return 
    print(n)
    printnos(n-1)

#printnos(64)

def sumOfDigits(n):
    '''
    :param n: given number
    :return: sum of digits of n.
    '''
    # code here
    if n == 0 :
       return 0
    
    return (n %10) + sumOfDigits(int(n/10)) 
print(sumOfDigits(549))


def digitalRoot(n):
    # code here
    
    if n == 0 :
        return 0 
    else :
        sum1 =  n%10 + digitalRoot(int(n/10))
        if sum1  == 0 :
            return 0
        else :
            return sum1%10 + digitalRoot(int(sum1/10))


def joshr(n,k):
        if n== 1:
            return 0
        else :
            return ((joshr(n-1,k)+k)%n)

#print(josh(4,2))

counter =2 

def isLucky(n):
    
    #RETURN 1 OR 0
    global counter 
    if counter > n :
        return 1
    if n % counter == 0 :
        return 0
        
    n = n  - int(n/counter)
    counter = counter + 1 
    return isLucky(n)

print(isLucky(74))
def fun():
    global counter
    print(counter)    
    counter = counter + 1 
    print(counter)
            
fun()