#include<stdio.h>
int main()
{
    int i,num ,result = 1 , x;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the power :");
    scanf("%d",&x);
    for ( i =1 ;i <= x;i++)
       result = result * num;
    printf(" %d power of %d is % d  ", x,num,result);
}
