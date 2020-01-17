#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct stack{
    int num;
    struct stack * next ;

};
struct stack * top = NULL;
struct stack * push(struct stack *,int );
struct stack * pop(struct stack * );
void display(struct stack * );
void peek(struct stack *);
int main()
{
    top = push(top,7);
    top = push(top,9);
    top =push(top,11);
    top =push(top,13);
    display(top);
    peek(top);
    top = pop(top);
    display(top);
    return 0 ;
}
struct stack * push(struct stack * top ,int val )
{
    struct stack * newnode,*ptr  ;
    newnode = (struct stack *)malloc(sizeof(struct stack));
    newnode->num = val;
    if( top == NULL)
    {
        newnode->next =NULL;
        top = newnode ;

    }
    else
    {
        newnode->next = top;
        top = newnode ;
    }
    return top ;
    
}
struct stack *pop(struct stack * top)
{
    if(top == NULL )
        printf("STACK EMPTY");
    else
    {
        printf("%d",top->num);
        top = top->next;
    }
    return top ;
}

void peek(struct stack *top )
{
    if(top == NULL){
        printf("STACK EMPTY ");
    }
    else
    {
        printf("%d",top->num);
    }
}

void display(struct stack * top )
{
    struct stack * ptr ;
    ptr = top ;
    if(ptr == NULL )
    {
        printf("STACK IS EMPTY ");
    }
    else
    {
        while(ptr != NULL )
        {
            printf("%d",ptr->num);
            ptr = ptr->next;
        }
    }
}



