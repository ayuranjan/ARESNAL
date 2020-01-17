#include<stdio.h>
int main()
{
    int num, i;
    int factorial =1;
    printf("ENTER THE NUMBER :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial = factorial *i;
    }
    printf("THE FACTORIAL OF NUMBER %d is %d",num,factorial);

}
