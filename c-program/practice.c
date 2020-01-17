#include <stdio.h>
#include <stdlib.h>  
int main()
{
   int a = 5,b =11;
   FILE *fptr;
   fptr = fopen("program.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   
   
   fprintf(fptr,"%d", a+b);
   fclose(fptr);
   return 0;
}

