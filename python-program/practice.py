'''arr = ["{","}"]
arr.append("]")
ai = "h"
arr.append(ai)
print(arr)
c =arr.pop()
print(c)
print(arr)'''
stack = []
s ="{{}}"
for i in s :
    if i =="(" or i == "{" or i =="[":
        stack.append(i)
    elif i ==")" or i == "}" or i =="]":
        symbol = stack.pop()
        if i != symbol :
            print("not true ")
            break
print("hello")
