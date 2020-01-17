#include<stdio.h>
#include<string.h>
pallindrome(char string[]);
int main()
{
    char name[100];
    printf("ENTER THE STRING:");
    gets(name);
    pallindrome(name);
}
pallindrome (char string[])
{
    int i=0;
    int l = strlen(string) - 1;
    while(l>1)
    {
        if (string[i++] != string[l--])
        {
            printf("its not a PALLINDROME ");
            break;
        }
        else
            printf("ITS A PALLINDROME");
    }
}
