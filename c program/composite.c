#include<stdio.h>
int main()
{
    int i,num,flag ;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=2;i<num - 1;i++)
    {
       if(num %i == 0)
        {
         flag = 1;
           break;
        }
    }
     if ( flag == 1 )
        printf("composite number");
     else
        printf("Prime Number ");

}
