#include<stdio.h>
int main()
{
    int arr[10] = {3,9,45,63,18,81,108,54,72,36};
    int k,j,i ;
    int number;
    for(k=1;k<10;k++)
    {
      if(arr[k]  < arr[k-1]);
      {
          number = arr[k];
          while(number < arr[k-1])
          {
              arr[k-1] = arr[k];
              k--;
          }
          arr[k-1] = number;
      }
    }
    for(i=0;i<10;i++)
        printf("\n%d",arr[i]);
}
