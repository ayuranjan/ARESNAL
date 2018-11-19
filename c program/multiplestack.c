#include<stdio.h>
#define max 10
int stack[max] ,topA = -1, topB = max;
void pushA(int val)
{
    if(topA == topB -1 )
        printf("overflow");
    else
    {
        topA++ ;
        stack[topA] =val;
    }
}
void pushB(int val)
{
    if(topB == topA + 1)
        printf("overflow");
    else
    {
        topB-- ;
        stack[topB] =val;
    }
}
void popA()
{
    if(topA == -1)
        printf("UNDERFLOW");
    else
    {
        printf("%d",stack[topA]);
        topA--;
    }
}
void popB()
{
    if(topB == max)
        printf("underflow");
    else
    {
        printf("%d",stack[topB]);
        topB++;
    }
}
void displayA()
{
    int i;
    if(topA == -1)
        printf("STACK A IS EMPTY ");
    else
    {
        for(i=topA ;i>= 0;i--)
            printf("%d\t",stack[i]);
    }
}
void displayB()
{
int i;
if(topB == max)
    printf("STACK B IS EMPTY");
else
{
    for(i =topB ;i< max;i++)
        printf("%d",stack[i]);
}
}

int main()
{
    int option ,val;
     do{   printf("1.PUSH IN STACK A     2.POP IN STACK A           3.DISPLAY STACK A ");
        printf("4.PUSH IN STACK A     5.POP IN STACK A           6.DISPLAY STACK A       7.EXIT");
        printf("ENTER YOUR CHOICE ");
        scanf("%d",&option);
        switch(option)
        {
            case 1 : printf("ENTER THE VALUE TO BE PUSHED IN STACK A ");
                    scanf("%d",&val);
                    pushA(val);
                    break;
            case 2 : popA();
                     break;
            case 3 :printf("THE CONTENT OF STACK A : ");
                    displayA();
                    break;
            case 4 : printf("ENTER THE VALUE TO BE PUSHED IN STACK A ");
                    scanf("%d",&val);
                    pushB(val);
                    break;
            case 5 : popB();
                     break;
            case 6 :printf("THE CONTENT OF STACK A : ");
                    displayB();
                    break;
            

        }
     }while(option != 7);
   return 0;
}
