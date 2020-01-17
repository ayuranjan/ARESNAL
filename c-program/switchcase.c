#include<stdio.h>
int main()
{
    char c;
    printf("Entger the grade:");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
        printf("75+");
        break;
    case 'b':
        printf("65-75");
        break;
    }
}
