#include<stdio.h>
int josh(int n,int k)
{
    if(n == 1 )
        return 1 ;
    else 
        return ((josh(n-1,k)+k-1)%n +1);
}
int main()
{
    int n =14 ;
    int k =2 ;
    printf("The chosen one is %d",josh(n,k));
    return 0 ;
}
