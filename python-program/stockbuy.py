price = [1,5,3,8,12]

def maxprofit(price,start,end ):
    profit = 0
    if start >= end :
        return 0 
    for i in range(start,end):
        for j in range(i+1,end ):
            if price[i] < price[j]:
                curr_profit = price[j] - price[i] + maxprofit(price,start,i-1) + maxprofit(price,j+1,end)
            profit = max(profit,curr_profit)
    return profit
def eff_maxprofit(price,n):
    profit = 0
    for i in range(1,len(price)):
        if price[i-1] < price[i]:
            profit = profit + (price[i] - price[i-1])
    return profit
print(eff_maxprofit(price,len(price)))