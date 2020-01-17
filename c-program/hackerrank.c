#include<stdio.h>
int main()
{
    int square,num,i = 0;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    while (i < num )
    {
       square = i*i;
        printf("\n%d",square);
        i++;

    }
}
