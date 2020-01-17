items = [[1,10,2],[2,5,3],[3,15,5],[4,7,7],[5,6,1],[6,18,4],[7,3,1]]
ratios=[]
total_capacity= 15
profit = 0 
for i in range(len(items)):
    j =1
    k=2
    ratio = items[i][j] /items[i][k]
    #print(ratio)
    ratios.append([i+1,ratio])
print(ratios)
ratios.sort(key = lambda x: x[1],reverse = True)
print(ratios)
for i in range(len(ratios)):
    count = ratios[i][0]
    #print(count)
    for j in range(len(items)):
        if count == items[j][0] :
            if total_capacity > items[j][2]:
                #print(items[j][2])
                total_capacity = total_capacity - items[j][2]
                profit = profit + items[j][1]
            elif total_capacity >0:
                profit = profit + total_capacity *(items[j][1] /items[j][2])
                total_capacity = 0
                
print(profit)    
        

    



