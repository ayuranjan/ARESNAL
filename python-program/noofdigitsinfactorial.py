import math
def digitsInFactorial(N):
    def fact(N):
        if N <= 1:
            return 1 
        else :
            return N * fact(N-1 )
    number = fact(N)
    return math.floor(math.log10(number) + 1)

print(digitsInFactorial(120))
