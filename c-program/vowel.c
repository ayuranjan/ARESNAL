#include<stdio.h>
 main()
{
    char ch;
    printf("Enter the charector :");
    scanf("%c",&ch);
       if ((ch == 'a')|| ch=='e' || ch=='i'  || ch=='o' || ch == 'u')
        printf("it is a vowel");
    else
        printf("It is a consonant");
}
