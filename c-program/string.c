#include<stdio.h>
#include<string.h>
int main()
{
    printf("EBTER THE STRING ");
    char s1[100],s2[100],s3[200];
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    puts(s1);
    return 0;
}