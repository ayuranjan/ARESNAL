import numpy as np 
import pandas as pd
# vectors 
vector = np.array([1, 2, 3])
print(vector)

#list 
l = [1,2,3]
print(l)

#matrix 
matrix = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(matrix)


 #dataframe

lst = ['Ayushh', 'Ranjan', 'Jha', 'Vikas', 
            'Raunak', 'Ranjana', 'Jha']
 

df = pd.DataFrame(lst)
print(df)


#factor in r is called category in python 


s = pd.Series(["a","b","c","a"], dtype="category")
print(s)
