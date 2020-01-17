#to read file
f = open('ayush.txt','r')
print(f.read()) #to print entire data 
print(f.read()) # to print single line  and then point the pointer to next line 
print(f.read())

#to write in file 
f1 = open('abc','w') #if no such file exists it will get created itself
f1.write("CRAZY PERSONALITY ") # but this will remove the existed data 

 #to append in a file i.e add data in previously exsisting data in a file 
f2 = open('abc','a')
f2.write("crazy ranjan")

#read data from one file(ayush) and write in another(abc)
f3 = open('ayush.txt','r')
f4 = open('abc','a')
for i in f3 :
    f4.write(i)

#to read and write in files data which are not in text or binary we use 'wb' in place in w and similarly 
