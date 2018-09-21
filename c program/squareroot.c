#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    float square ;

    printf("Enter the number:");
    scanf("%d",&number);

   square  = sqrt(number);
    printf("The square root of %d is %f",number,square);
}
