#include<stdio.h>
#include<malloc/malloc.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *,int num );
struct stack *pop(struct stack *);
void peek(struct stack *);
void display(struct stack *);
void main()
{
    int choice ;
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
            case 1 :printf("ENTER THE NUMBER TO BE PUSHED ");
                    int num;
                    scanf("%d",&num);
                    top = push(top , num );
                    break;
            case 2 : top = pop(top);
                     break;
            case 3 : peek(top);
                     break;
            case 4 : display(top);
                      break;

        }
    }while(choice != 5);
}
struct stack *push(struct stack *top, int num )
{
    struct stack *newnode ;
    newnode =(struct stack *)malloc(sizeof(struct stack));
    newnode ->data =num;
    if(top == NULL)
    {
        top = newnode;
        newnode ->next =NULL ;

    }
    else 
    {
        newnode ->next =top ;
        top = newnode;
    }
    return top ;
}
struct stack *pop(struct stack *top)
{
    if(top == NULL)
        printf("STACK IS EMPTY");
    else 
    {
        printf("THE POPED NUMBER IS %d",top ->data);
        top = top ->next;

    }
    return top ;
}
void peek(struct stack *top)
{
    if(top == NULL)
          printf("THE STACK IS EMPTY ");
    else 
        { printf("THE VALUE AT THE TOP IS %d",top ->data);}
}
void display(struct stack *top )
{
    struct stack *ptr;
    ptr = top;
    if(top == NULL)
        printf("STACK IS EMPTY ");
    else 
    {
        while(ptr != NULL)
        {
            printf("%d\n",ptr ->data);
            ptr = ptr ->next;
        }
    }
    
}