#include<stdio.h>

int main()
{

    int i,j;
    int swap;
    int arr[10] = {39,9,81,45,90,27,72,18,7,77};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i] >arr[j])
               {
                   swap = arr[i];
                   arr[i] = arr[j];
                   arr[j] = swap;
               }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\n%d",arr[i]);
    }
}
