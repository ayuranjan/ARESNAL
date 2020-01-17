
def partition(arr,low,high): 
	i = ( low-1 )		 
	pivot = arr[high]	 

	for j in range(low , high): 

		
		if arr[j] <= pivot: 
		 
			i = i+1
			arr[i],arr[j] = arr[j],arr[i] 

	arr[i+1],arr[high] = arr[high],arr[i+1] 
	return ( i+1 ) 


def quickSort(arr,low,high): 
	if low < high: 

		
		pi = partition(arr,low,high) 

		 
		quickSort(arr, low, pi-1) 
		quickSort(arr, pi+1, high) 
from string import ascii_lowercase


LETTERS = {letter: str(index) for index, letter in enumerate(ascii_lowercase, start=1)} 

def alphabet_position(text):
    text = text.lower()

    numbers = [LETTERS[character] for character in text if character in LETTERS]

    return ' '.join(numbers)

#arr  =[1,5,9,2,4]
st = "TESTCASE"
p = alphabet_position(st)
print(p)


arr = [ord(c) for c in st]
#arr = alphabet_position(arr1)
n = len(arr) 
quickSort(arr,0,n-1) 
print ("Sorted array is:") 
for i in range(n): 
	print (chr(arr[i])), 



