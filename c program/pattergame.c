#include<stdio.h>
int main()
{
    int m=5,n=1,L=4;
    int a,b,c;
    for(a=1;a<=m;a++)
    {
        for(c=L;c>=a;c--)
       {
           printf("-");
       }
       for(b=1;b<=a;b++)
          {
              printf("%d",b);

          }

        printf("\n");
    }
}
