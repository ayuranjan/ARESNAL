#include<stdio.h>
int main()
{
    int i, age;
    char phone[10];
    char name[100];
    printf("ENTER YOUR NAME:");
    gets(name);
     printf("ENTER YOUR PHONE NUMBER:");
    gets(phone);
    printf("ENTER YOUR AGE:");
    scanf("%d",&age);


    puts(name);
    puts(phone);
    printf("%d",age);


}
