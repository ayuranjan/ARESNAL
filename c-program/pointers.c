#include<stdio.h>
void main()
{
   int *ptr,arr[] = {1,2,34,5,7};
    ptr = &arr[3];
   printf("%d %d %d %d",arr ,&arr ,arr[0],*ptr);
}
