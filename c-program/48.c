#include<stdio.h>
int main()
{
    int i ,num;
    int composite=0,prime = 0,flag = 0 ;
    printf("Enter -1 to exit");
    printf("Enter the number :");
    scanf("%d",&num);
    do
    {
        for(i=2;i<= num - 1;i++)
        {
            if ( num % i == 0 )
              {
                flag = 1;
                 break;
              }
        }
        if ( flag == 0 )
            prime ++ ;
        else
            composite ++ ;
        flag = 0;
        printf("\nEnter the next number:");
        scanf("%d",&num);

    }
    while ( num == -1 );
        printf("Numbers of prime is %d",prime);
        printf("Number of composite is %d ", composite);


}
