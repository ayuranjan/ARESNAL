
class linear_seach:
    def __init__(self,num,list1):
       self.num = num
       self.list1 = list1 
       for i in range(len(list1)):
            if list1[i] == num:
                print("found at index : ", i)
                break
       else:
           print("Number not found")
        
        
       

list1 =[1,4,6,8,3,5,9,77,44,55,21,70]
num = int(input("Enter the number to be searched:"))
l1 = linear_seach(num,list1)