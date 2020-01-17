total_candies = 15 
kids = 3 
arr = [0,0,0,0]
no = 0

while( total_candies > 0) :
    for i in range(1,kids+1 ):
        candy = i + no
        total_candies  = total_candies - candy 
        if total_candies > 0:
            arr[i] =arr[i] + candy
        if i == kids:
            no = kids
print(arr)