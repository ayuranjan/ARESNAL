#include<stdio.h>
void mov(int,char,char,char);
int main()
{
    int n ;
    printf("Enter the number of rings :");
    scanf("%d",&n);
    mov(n,'A','C','B');
    return 0;
}
void mov(int n,char source ,char dest,char spare)
{
    if(n == 1 )
        printf("move from %c to %c\n",source,dest);
    else
    {
        mov(n-1,source,spare,dest);
        mov(1,source,dest,spare);
        mov(n-1,spare,dest,source);
    }
}