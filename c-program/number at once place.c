#include<stdio.h>
int main()
{
    int number ,once;
    printf("Enter the number :");
    scanf("%d",&number );
    once = number % 10;
    printf("once digit is %d",once);
}
