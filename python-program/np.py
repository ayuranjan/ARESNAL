#import numpy as np
#import pandas as pd 
'''
a = np.array([[1,2],[3,4],[4,5]])
print(a)
print(a[[0,1,2],[0,1,0]])
print(a)
l = [1,2,3,5,83,6,3,8,0]
print(max(l))
p = max(l)
print(l.index(p))

arr = np.ones((4,4))
df = pd.DataFrame(arr)
print(arr)
print(df)
#print(np.mean(arr))
print(df.head(2))


'''
def div(a,b):
    print(a/b)

def new_div(div):
    def inner(a,b):
        if a < b :
            a,b = b,a 
        return div(a,b)

n = new_div(div)
n(5,10)