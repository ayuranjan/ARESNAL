import pandas as pd 

dic = {"day":[1,2,3,4,1,2,3], "visitor" : [100,700,300,500,200,899,566]}
df =pd.DataFrame(dic)
print(df)

#df.set_index("day",inplace=True)
#print(df)




e = df["day"].value_counts()
print(e)






c = df.groupby("day")
p = c["visitor"].max()
print(p)









#print(df)
#c = df.groupby("day")
#e = df["day"].value_counts()
#print(e)
#p = c["visitor"].max()
#print(p)
#q = df.visitor.tolist()
#print(max(q))







