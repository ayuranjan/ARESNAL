#include<stdio.h>
int main()
{
    float income, tax;
    printf("Enter the income:");
    scanf("%d",&income);
    if (income < 150000)
        printf("NO TAX");
    else
        if (  income >= 150001 || income <=300000)
          tax = .1* income;
        if ( income>= 300001 || income <=500000)
          tax = .2* income;
        if (income >= 500001)
          tax = .3* income;
    printf("The tax is %f",tax);
}
