#include<stdio.h>
div(int a,int b);
int add(int a ,int b);
sub(int a ,int b);
multi(int a ,int b);
main()
{
    int option ,num1,num2;
    printf("1.ADD \t 2.SUBTRACT\t 3.MUTLIPLICATION \t 4.DIVIDE :");
    scanf("%d",&option);
     printf("ENTER THE NUMBERS :") ;
     scanf("%d%d",&num1,&num2);

    switch(option)
    {
    case 1 :
        {
             int sum;
             sum = add( num1, num2);
             printf("SUM IS %d",sum);
        break;
        }
    case 2 :
        {

            sub( num1, num2);
         break;}
    case 3 :
       {
            multi( num1 , num2);
            break;
       }
    case 4 :
     {
        div(num1,num2);
        break;
     }
     default:
           printf("wrong Input ");
    }

}

int add(int a ,int b)
{

     return  (a + b) ;

 }

sub(int a ,int b)
 {
     printf("Difference is %d", (a-b));
 }
multi(int a ,int b)
 {
     printf("THE MULTIPLICATION IS %d", a*b);
 }
div(int a,int b)
  {
       printf("THE QUOTIENT IS %d",a/b);
  }
