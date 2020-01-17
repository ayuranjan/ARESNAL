#include<stdio.h>
int main()
{
    int i,n,arr[100],temp,small = 10000,large = -10000,pos1 ,pos2;
    printf("ENTER NUMBER OF ELEMENT IN ARRAY:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] < small)
        {
            small = arr[i];
            pos1 = i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
            pos2 = i;
        }
    }
//printf("LARGEST NUMBER IS %d",large);
//printf("SMALLEST NUMBER IS %d",small);
//printf("POSITION OF LARGEST IS %d",pos2);
//printf("POSITION OF SMALLEST IS %d",pos1);


arr[pos1] = large;
arr[pos2] = small;
for ( i=0 ;i <n; i++)
printf(" \n ARRAY[%d] IS %d",i,arr[i]);

}
