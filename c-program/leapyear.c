#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if ( (year%4 == 0) ||  ( year%400 == 0 ))
        printf("its a leap year ");
    else
        printf("its not a leap year");
}
