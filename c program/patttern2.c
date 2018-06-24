#include<stdio.h>
int main()
{
  int space_count = 4;
  int star_count = 1;

 int i,j,k;

 for(i=1;i<=10;i++)
 {   printf("\n");

     for(j=1;j<=space_count;j++)
     {
         printf(" ");
     }

     for(k=1;k<=star_count;k++)
     {

         printf("**");
     }

     if (i<5)
     {
     star_count++;
     space_count--;
     }

     else {

     star_count--;
     space_count++;

     }
 }
}
