#include<stdio.h>
#define max 10
int stack[max],top = -1;
void push(int stack[], int num );
void pop(int stack[]);
void peek(int stack[]);
void display(int stack[]);
void main()
{
    int num , option ;
    do{
        printf("1.PUSH 2.POP 3.PEEK 4. DISPLAY 5.EXIT");
        printf("ENTER YOUR CHOICE :");
        scanf("%d",&option);
        switch(option)
        {
            case 1 : printf("ENTER THE NUMBER TO BE PUSHED ");
                     scanf("%d",&num);
                     push(stack,num);
                     break;
            case 2 :  pop(stack);
                     break;
            case 3 : peek(stack);
                    break;
            case 4 : display(stack);
                     break;
        }
    }while(option != 5);

}
void push(int stack[],int num)
{
     if(top == max-1 )
     {
         printf("THE STACK IS FULL , OVERFLOW OCCURED  ");

     }
     else 
     {
         top ++;
         stack[top] = num;
     }
}
void pop(int stack[])
{
    int val;
    if(top == -1)
    {
        printf("STACK IS EMPTY ");

    }
    else 
    {
        val = stack[top];
        top --;
        printf("THE POPED ITEM IS %d",val);

    }
}
void peek(int stack[])
{
    if(top == -1)
    {
        printf("THE STACK IS EMPTY ");
    }
    else 
    {
        int val ;
        val = stack[top];
        printf("THE VALUE AT THE TOP OF  STACK IS %d",val);
    }
}
void display(int stack[])
{
    int i;
    if(top == -1 )
    {
        printf("THE STACK IS EMPTY ");
    }
    else 
    {
        for(i = top ;i >= 0 ;i--)
            printf("%d\n",stack[i]);
    }
}
