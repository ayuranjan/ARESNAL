#include<stdio.h>
int main()
{
    int n1=37,n2=22;
    n1 = n1 + n2;
    n2= n1 - n2;
    n1 = n1 - n2;
    printf("%d %d",n1,n2);
}
