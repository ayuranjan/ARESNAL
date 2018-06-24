#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int rev;

    while ( num != 0)
    {
        rev =  num%10 ;
        printf("%d",rev);
        num = num/10;
    }
}
