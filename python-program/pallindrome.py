# if a string is palindrome of not  using recursion 
def pal(s ,start ,end ):
    if start  == end :
        return True 
    elif start >  end :
        return True 

    elif s[start] != s[end] :
        return False
    elif s[start] == s[end]:
        return pal(s,start+1,end-1)


if pal("aabbaab",0,6) :
    print("YES")
else :
    print("False")