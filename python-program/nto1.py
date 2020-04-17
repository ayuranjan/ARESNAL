#print n to 1 using recursion 
def val(n):
    if n == 0:
        print(n)
    else :
        print(n)
        val(n-1 )

def valrev(n):
    if n ==0:
        print(n)
    else :
        valrev(n-1)
        print(n)

#val(5)
valrev(5)