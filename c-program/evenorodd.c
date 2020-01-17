#include<stdio.h>
int main()
{
    int   i,m,n;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Enter M:");
    scanf("%d",&m);
    for (i=m;i<=n;i++)
    {
        if ( i%2 == 0)
            printf("\n%d is EVEN NUMBER",i);
        else
            printf("\n %d is ODD NUMBER",i);
    }
}
