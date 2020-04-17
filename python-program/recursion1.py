
def fun(n):
    if n== 0 :
        return 
    print(int(n%2))
    fun(int(n/2))


fun(25)