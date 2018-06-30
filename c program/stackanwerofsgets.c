#include<stdio.h>
    #include <string.h>

    int main()
    {
        int i, age;
        char phone[10];
        char name[100];
        printf("ENTER YOUR NAME:");
        fgets(name , 100 , stdin);

        printf("ENTER YOUR AGE:");
        scanf("%d",&age);

        printf("ENTER YOUR PHONE NUMBER:");
        scanf(" ");
        fgets(phone,10,stdin);


        printf("Name: ");
        fputs(name , stdout );
        printf("Age: %d\n",age);
        printf("Phone Number: ");
        puts(phone);

    }
