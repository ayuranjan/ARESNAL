

import numpy as np
from scipy import stats
import statistics 



array = np.random.randint(low = 0,high = 1000,size = 500) 
#print(array)
mean = np.mean(array)
median = np.median(array)
average = np.average(array)
m = stats.mode(array)
sd = statistics.stdev(array)

print(mean,median,average,m,sd)
print(np.std(array))