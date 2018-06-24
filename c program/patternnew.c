#include<stdio.h>
int main()
{
    int m= 5 , n=5 , p;
    int i,j,k,l;
    for(i=1;i<=m;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("*");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(l=k-2;l>0;l--)
        {
            printf("%d",l);
        }
       printf("\n");
    }
}
