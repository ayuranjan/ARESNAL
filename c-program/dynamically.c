#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2, i, *ptr1,*ptr2, sum = 0;

    printf("Enter number of elements in 1st array : ");
    scanf("%d", &num1);
    ptr1 = (int*) malloc(num1 * sizeof(int));
    printf("Enter elements of  1ST array: ");
    for(i = 0; i < num1; i++)
    {
        scanf("%d", ptr1 + i);

    }


     printf("Enter number of elements in 2nd array : ");
    scanf("%d", &num2);
     ptr2 = (int*) malloc(num2 * sizeof(int));
    printf("Enter elements of  2ND array: ");
    for(i = 0; i < num2; i++)
    {
        scanf("%d", ptr2 + i);

    }


    for(i = 0; i < num1; ++i)
    {
        printf("%d", *ptr1 + i);
    }

    {
        printf("%d", *ptr2 + i);

    }

   for()
}

