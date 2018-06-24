
#include<stdio.h>
int main()
{
    int arr[10],i,n;
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER %d ELEMENT IN ARRAY:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
      {
          printf("\nARR[%d] is %d", i,arr[i]);
      }
}
