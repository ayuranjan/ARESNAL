#include<stdio.h>
int main()
{
    int i, average ,sum= 0,n, arr[100];
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER %d ELEMENT IN ARRAY:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    average = sum / n ;
    printf("AVERAGE IS %d",average);
}
