#include <stdio.h>

int N = 12; // Global Variable
int M = 1;


int main()
{
   int i,j;

   for(i=0;i<N;i++)
   {
       printf("\n");

       for(j=0;j<M;j++)
       {
           printf("*");
       }

       if (i<5) M = M  + 1 ;
       else M = M - 1;
   }
}
