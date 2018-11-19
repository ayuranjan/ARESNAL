#include<stdio.h>
#define MAX 10
int stack[MAX], top = -1 ;
void push(int stack[],int num);
void pop(int stack[]);
void peek(int stack[]);
void display(int stack[]);
int  main()
{
    int choice ,num;
    do{
        printf("1.PUSH");
        printf("2.POP");
        printf("3.PEEK");
        printf("4.DISPLAY");
        printf("5.EXIT");
        printf("ENTER YOUR CHOICE ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("ENTER THE NUMBER TO BE PUSHED");
                     scanf("%d",&num);
                     push(stack,num);
                     break;
            case 2 : pop(stack);
                     break;
            case 3 : peek(stack);
                     break;
            case 4 : display(stack);
                    break;
            
        }
    }while(choice !=5);
    return 0;

}
 
 void push(int stack[],int num)
 {
     if(top == MAX -1 )
     {
        printf("OVERFLOW");
     }
     else
     {
         top =top + 1;
         stack[top] = num;
     }
 }
 void pop(int stack[])
 {
     int val;
     if(top == -1)
     {
         printf("UNDERFLOW");
     }
     else
     {
         val = stack[top];
         top = top -1;
         printf("THE POPED NUMBER IS %d",val);

     }
 }

 void peek(int stack[])
 {
     if(top == -1 )
     {
         printf("Stack is empty ");
     }
     else 
     {
         printf("%d",stack[top]);
     }
 }
 void display(int stack[])
 {
     int i;
     if(top == -1 )
     {
         printf("STACK IS EMPTY ");
     }
     else 
     {
         for(i= top ;i>= 0;i--)
         {
             printf("%d",stack[i]);
         }
     }
 }