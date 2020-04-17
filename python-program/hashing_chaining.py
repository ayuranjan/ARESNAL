# Function to display hashtable 
def display_hash(hashTable): 
	
	for i in range(len(hashTable)): 
		print(i, end = " ") 
		
		for j in hashTable[i]: 
			print("-->", end = " ") 
			print(j, end = " ") 
			
		print() 

# Creating Hashtable as 
# a nested list. 
HashTable = [ [] for _ in range(10)] 

# Hashing Function to return 
# key for every value. 
def Hashing(key): 
	return key % len(HashTable) 

def insert(Hashtable, key, value): 
	hash_key = Hashing(key) 
	Hashtable[hash_key].append(value) 
def searching(HashTable,key,value):
    count = 0
    hash_key = Hashing(key)
    for i in HashTable[hash_key]:
        if value == i:
            print("True")
            count = 1
            break
    if count == 0:
        print("False")  
            
def delete(HashTable,key,value):
    hash_key = Hashing(key)
    HashTable[hash_key].remove(value)

    




insert(HashTable, 10, 'Allahabad') 
insert(HashTable, 25, 'Mumbai') 
insert(HashTable, 20, 'Mathura') 
insert(HashTable, 9, 'Delhi') 
insert(HashTable, 21, 'Punjab') 
insert(HashTable, 21, 'Noida') 
searching(HashTable, 21, 'Noida')
delete(HashTable, 21, 'Noida')
display_hash (HashTable) 
