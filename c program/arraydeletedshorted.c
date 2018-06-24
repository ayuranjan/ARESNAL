#include<stdio.h>
int main()
 {
     int main int n,i,arr[100],num;

     printf("ENTER NUMBER OF ELEMENTS IN AN ARRAY :");
    scanf("%d",&n);
    for ( i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER TO BE DELETED:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i] == num)
        {
            for(j=i;j<n;j++)
            {
                arr[j] = array[j+1];
            }
        }
    }
 }
