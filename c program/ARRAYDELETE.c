#include<stdio.h>
int main()
{
    int n,i,arr[100],pos;
    printf("ENTER NUMBER OF ELEMENTS IN AN ARRAY :");
    scanf("%d",&n);
    for ( i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE POSITION TO BE DELETED:");
    scanf("%d",&pos);
    for (i =pos  ;i < n;i++)
    {
        arr[i] = arr[i+1];
    }
    for(i=0;i<n-1 ;i++)
          printf("%d",arr[i]);
}
