#include<stdio.h>
int fun(int );
int main()
{
    int s =fun(6);
  printf("%d",s);

return 0;
}   
int fun(int n)
{
    if(n <0)
      return 0;
    else 
    {
        fun(n-2);
        printf("%d",n-1);
        fun(n-3);
    }
} 

