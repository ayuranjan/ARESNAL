#cube sum of first n natural number
n = int(input('Enter the the number: '))
sum = 0
for i in range(n+1):
    sum += i**3
print(sum)