#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=0;i<6;i++)
    {
        for(j=5;j>i;j--)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
        k=1;
    }
}
