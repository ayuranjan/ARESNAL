#include<stdio.h>
int main()
{
    int i,j,n = 7,flag = 0,arr[100],num;
    printf("enter number of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for( j = 0;j<n;j++)
        {
         if ( arr[j] == arr[i] && j != i )
           {
            flag = 1;
               num = arr[j];
           }
        }
    }
    if (flag =1)
       {
           printf("HAS DUPLICATE NUMBER");
           printf("AND THE NUMBER IS %d",num);
       }
    else
        printf("NO DUPLICATE MUMBER");
}
