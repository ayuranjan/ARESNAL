#n = int(input("Enter the number between 1 to 1000::"))
'''n =932
sum = 0 
while n > 0:
    sum = sum + n%10
    n = n //10
print(sum) 
'''
'''
fib_cache ={}

def fibo(n):
    if n in fib_cache:
        return fib_cache[n]
    if n <= 2 :
        value = n 
    else:
        value=  fibo(n-1) + fibo(n-2)
    fib_cache[n] = value
    return value
print(fibo(7))
'''
#using decorators 
#from functools import lru_cache
#@lru_cache()
def fibo(n):
    if n< 2 :
        return n 
    else:
        return fibo(n-1 )+ fibo(n-2)
print(fibo(7))


'''
class store :
    code={1:"apple",2:"banana",3:"orange"}
    l = list(code.values())
    n = len(l)
    price =[100,20,60]
    def show_items(self):
        for i in  range(0,self.n):
            print(self.l[i],self.price[i])
    def cost(self,n1,n2,n3):
        cost = n1 * self.price[1] +n2 *self.price[2] + n3 *self.price[3]
        print("your total bill is "+ cost)
s =store()
s.show_items()
l1 = list(input("Enter the code of item"))
s.cost(l1)

'''
