#include<stdio.h>
int main()
{
    int arr[10],i,n,k,num;
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER %d ELEMENT IN ARRAY:",i);
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER TO BE INSERTED:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if (num < arr[i])
        {
            for ( k = n -1 ;k <= i;k--)
            {
                arr[k+1] = arr[k];
            }
            arr[i] = num;
        }
    }
    for ( i=0 ; i<n+1;i++)
        printf("%d",arr[i]);
}
