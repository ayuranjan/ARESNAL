
import random 
import time

def quicksort(arr, low , high): 
	if(low < high): 
		
		
		pivotindex = partitionrand(arr, low, high)  
		quicksort(arr , low , pivotindex - 1) 
		quicksort(arr, pivotindex + 1, high) 
		print(arr)

# This function generates random pivot, swaps the first 
# element with the pivot and calls the partition fucntion. 
def partitionrand(arr , low, high): 

	
	randpivot = random.randrange(low, high)  
	arr[low], arr[randpivot] = arr[randpivot], arr[low] 
	return partition(arr, low, high) 


def partition(arr,low,high): 
	pivot = low 
	i = low + 1
	for j in range(low + 1, high + 1): 
		if arr[j] <= arr[pivot]: 
			arr[i] , arr[j] = arr[j] , arr[i] 
			i = i + 1
	arr[pivot] , arr[i - 1] = arr[i - 1] , arr[pivot] 
	pivot = i - 1
	return (pivot) 



array = list([5,11,13,18,12,45,33,44,55,66,77,88,99,111,222,333,444,555,666,777,888,100,1100,2200,3300,4400,5500,6600,7700,8800,9900,1000,2000,3000,400,500,600,700,777,666,555,444,333,222,111])
start1 = time.time()
quicksort(array, 0, len(array) - 1) 
print(array) 

end = time.time()
print(end - start1)


