#include<stdio.h>
int main()
{
    int arr[10] = {3,9,45,63,18,81,108,54,72,36};
    int i,n =10;
    for(i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1])
        {
          int number ;
          int j = i -1;
          number = arr[i];
          while(number <= arr[j])
          {
              arr[j+1]= arr[j];
              j--;
          }
          arr[j+1] = number;
        }
    }
    for(i=0;i<n;i++)
        printf("\n%d",arr[i]);

}
