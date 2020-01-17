#include<stdio.h>
int main()
{
  char ch;
    printf("Enter the charector :");
    scanf("%c",&ch);

    if (ch >= 'A' && ch<= 'Z' )
        printf("the lower  case is %c ",(ch + 32) ) ;
    else
        printf("the uppeer case is %c ",(ch-32) );
    return 0 ;
}
