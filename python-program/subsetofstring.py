#given a  string , print all subset of it in any order 
def sub(s,current = " ",index = 0):
    if index == len(s) :
        print(current)
        return 
    sub(str,current,index + 1 )
    sub(str, current + str[index ] , index +1 )
s = "ABC"
sub(s)