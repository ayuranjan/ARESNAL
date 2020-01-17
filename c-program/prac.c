#include<stdio.h>
int main()
{
 int a = 10;
 int *p ,**p2 ;
 p = &a ;
 p2 = &p;
 **p2 = 77;
 printf("%d",a);
    
}