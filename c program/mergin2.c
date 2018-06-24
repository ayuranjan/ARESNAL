#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[200];
    int n1,n2,m;
    int i,count = 0;
    int coun1= 0,coun2 = 0;
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
    while(coun1<n1 && coun2<n2)
    {
        if(arr1[coun1]<arr2[coun2])
        {
            arr3[count] = arr1[coun1];
            coun1++;
        }
        else
            {
                arr3[count] = arr2[coun2];
                coun2++;
            }
     count++;
     if(coun1 == n1)
     {
         while(coun2 < n2)
         {
             arr3[count] = arr2[coun2];
             coun2++;
             count++;

         }
     }
     else if(coun2 == n2)
     {
         while(coun1 <n1)
         {
             arr3[count] = arr1[coun1];
             count++;
             coun1++;
         }
     }
    }
    for(i=0;i<m;i++)
        printf("%d",arr3[i]);

}
