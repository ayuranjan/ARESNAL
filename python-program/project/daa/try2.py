def double_values(collection):
    for v in range(len(collection)):
         collection[v] = collection[v] * 2
d = {1: 10, 2: 20, 3: 30}
double_values(d)