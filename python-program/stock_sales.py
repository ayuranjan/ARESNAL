
arr= [100, 180, 260, 310, 40, 535, 695]
start = 0
end = 0

for i in range(1,len(arr)):
            ##if(arr[start] > arr[i] ):
                #start = i 
            
            if (arr[end] < arr[i]):
                end = i 
            
            if (arr[end]> arr[i] ):
                print(start , end )
                start = i
                end = i 
                #print(start , end )
            else :
                print(start,end )

            
               
            