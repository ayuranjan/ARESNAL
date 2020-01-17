#include<stdio.h>
int main()
{
    int i,n,pos = -1 ,smallest = 100 ,arr[100];
    printf("enter number of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        printf("\n%d",arr[i]);
    for (i=0;i<n;i++)
    {
        if ( arr[i] < smallest)
           {
            smallest = arr[i];
            pos = i ;
           }
    }
    printf("SMALLEST NU4MBER IS %d",smallest);
    printf("POSITION IS %d",pos);
}
