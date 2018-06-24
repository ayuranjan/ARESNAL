#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[200];
    int n1,n2,m;
    int i,count = 0;
    printf("ENTER THE NUMBER OF ELEMENT IN ARRAY:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    printf("*****************************");
    printf("ENTER THE NUMBER OF ELEMENTS IN array2 :");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    m = n1 + n2;
    for(i=0;i<n1;i++)
        {arr3[count] = arr1[i];
         count ++;
        }
    for(i=0;i<n2;i++)
    {
        arr3[count] = arr2[i];
        count++;
    }
    for(i=0;i<m;i++)
    {
        printf("%d",arr3[i]);
    }
}

