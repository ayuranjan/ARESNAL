#include<stdio.h>
int main()
{
    char ch;
    float bonus, amount_to_be_paid,salary;
    printf("Enter the Gender of employee :");
    scanf("%c",&ch);
    printf("Enter the salary:");
    scanf("%f",&salary);
    if (ch == 'M'||'m')
        bonus = .05 * salary;
    else
        bonus = .1 * salary;
    if (salary < 10000)
        bonus += .02 * salary;
    amount_to_be_paid = salary + bonus;
    printf("\nSalary is %.2f",salary);
    printf("\nbonus is %.2f", bonus);
    printf("\namount is %.2f ",amount_to_be_paid);
}
