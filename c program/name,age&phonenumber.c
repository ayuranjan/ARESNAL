#include<stdio.h>
int main()
{

    int i, age;
    char phone[10];
    char name[100];
    printf("ENTER YOUR NAME:");
    fgets(name,100,stdin);
    printf("ENTER YOUR AGE:");
    scanf("%d",&age);
    printf("ENTER YOUR PHONE NUMBER:");
    fgets(phone,10,stdin);

    fputs(name,stdout);
    printf("%d",age);
    fputs(phone,stdout);

}
