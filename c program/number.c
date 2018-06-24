#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if (num == 0)
        printf("THE NUMBER IS ZERO");
    else
        if (num < 0)
            printf("THE NUMBER IS NEGATIVE");
        else
            printf("THE NUMBER IS POSITIVE ");
}
