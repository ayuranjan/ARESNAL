#include<stdio.h>
#define max 10
int stack[max];
int top = -1 ;
void push(int stack[],int val );
void pop(int stack[]);
void peek(int stack[]);
void display(int stack[]);
int main()
{
    push(stack,9);
    push(stack,10);
    push(stack,12);
    push(stack,14);
    display(stack);
    peek(stack);
    pop(stack);
    display(stack);

    return 0;
}

void push(int stack[],int val)
{
    if(top == max -1 )
        printf("OVERFLOW");
    else
       { top = top +1 ;
        stack[top] = val;}
}

void pop(int stack[])
{
    if (top == -1 )
        printf("UNDERFLOW");
    else{
        printf("%d",stack[top]);
        top--;
    }
}

void display(int stack[])
{
    int i =0;
    if(top == -1)
        printf("EMPTY STACK");
    else
    {
        for(i =top;i>=0;i--)
            printf("%d",stack[i]);
    }
}

void peek(int stack[])
{
    if (top == -1)
        printf("EMPTY ");
    else
    {
        printf("%d",stack[top]);
    }
}