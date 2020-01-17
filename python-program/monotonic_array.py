from array import *  
arr = array('i',[7,8,9,10,11,12,12,14])
inc =0
dec =0 
for i in range(len(arr)):
    j =i + 1 
    if j < len(arr):
        if i == len(arr):
            break
        elif arr[i] > arr[i+1]:
            dec += 1
        elif arr[i] < arr[i+1]:
            inc += 1 
        elif arr[i] == arr[i+1]:
            inc += 1 
            dec += 1 
    else:
        pass
    
if inc == len(arr) -1 and dec != len(arr) -1  :
    print('Monotonic increasing')
elif dec == len(arr) -1 and  inc != len(arr) -1:
    print('Monotonic decreasing ')
elif inc == len(arr) -1 and dec == len(arr) -1  :
    print("All values equal")
else:
    print('Its not Monotonic')
    

        