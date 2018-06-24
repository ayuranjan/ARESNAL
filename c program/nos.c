#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,count=0,num,rev = 1,reverse=0;
    num = 123;
    int number = 123;
    while (num > 0 )
    {   //printf("%d\t", num);
        reverse = reverse*10 + (num%10);// getting the units digit
        num = num/10; // removing the units digit
        count++;
    }
    printf("%d\n",count);
 /**   for(i=0;i<=count;i++)
    {
         rev= number %10;
         reverse += rev * pow(10,count);
         number = number/10;
    }
**/    printf("%d",reverse);
}
