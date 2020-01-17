#include <stdio.h>
int main()
{
   int array[5]={1,2,3,45,6}, i;
   int *p = &array;
   
   for(i = 0; i < 5; ++i)
      printf("%d\n", *(p+ i));
   return 0;
}