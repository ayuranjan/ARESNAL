


string1 = "Ayush Ranjan"
string = (string1.lower())


freq = {} 

for i in string: 
	if i in freq: 
		freq[i] += 1
	else: 
		freq[i] = 1


print (str(freq)) 
print(string["a"])
