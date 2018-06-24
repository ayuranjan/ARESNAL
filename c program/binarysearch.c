#include<stdio.h>
int main()
{
    int n , i;
    n = 65000;
    int arr[n];
   // printf("ENTER THE NUMBERS OF ELEMENT IN AN ARRAY:");
    //scanf("%d",&n);
   // for ( i=0;i<n;i++)
   // {
//scanf("%d",&arr[i]);
    //}
    for(i=0;i<n;i++)
    {
        arr[i] = i;
    }



    int number;
while (1)
{
    printf("ENTER THE NUMBER TO BE SEARCHED : ");
    scanf("%d",&number);
    int max ,min ,middle ;
    max = n-1 ;
    min =0;
    while ( min <= max)
    {
        middle = (max + min)/2 ;
        if (arr[middle] == number )
        {
            printf("%d is present at position %d", number ,middle);
            break;
        }
        else if (arr[middle] > number)
        {
            max = middle - 1;
        }
        else if(arr[middle] < number)
        {
            min  = middle +1 ;
        }
    }
    if (min > max)
        printf("THE NUMBER DOES NOT EXISTS ");
}
}
