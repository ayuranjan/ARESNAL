#include<stdio.h>
#include<malloc/malloc.h>
struct stack{
    int process;
    int priority;
    struct stack *next;
};
int output[10];
struct stack *top = NULL;
struct stack *push(struct stack *,int num ,int prio);
struct stack *pop(struct stack *);
struct stack *process_order(struct stack *);
int peek(struct stack *);
void display(struct stack *);
void main()
{
    int choice ,p;
    do{
        printf("1.PUSH");
        printf("2.POP");
        printf("3.PEEK");
        printf("4.DISPLAY");
        printf("5.PROCESSING ORDER");
        printf("6.EXIT");
        printf("ENTER YOUR CHOICE ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :printf("ENTER THE PROCESS NUMBER ");
                    int num;
                    scanf("%d",&num);
                    printf("ENTER THE PRIORITY");
                    scanf("%d",&p);
                    top = push(top , num,p );
                    break;
            case 2 : top = pop(top);
                     break;
            case 3 : peek(top);
                     break;
            case 4 : display(top);
                      break;
            case 5 : process_order(top);
                      break;

        }
    }while(choice != 6);
}
struct stack *push(struct stack *top, int num ,int prio)
{
    struct stack *newnode ;
    newnode =(struct stack *)malloc(sizeof(struct stack));
    newnode ->process =num;
    newnode ->priority = prio;
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
        printf("THE POPED PROCESS IS %d",top ->process);
        top = top ->next;

    }
    return top ;
}
int peek(struct stack *top)
{
    if(top == NULL)
         { printf("THE STACK IS EMPTY ");
            return -1;}
    else 
        { printf("THE PROCESS AT THE TOP IS %d",top ->process);
           return top->process}
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
            printf("%d\n",ptr ->process);
            ptr = ptr ->next;
        }
    }
    
}
struct stack *(struct stack *top)
{
    int count = 0;
    while(count != 3 )
    {
       
        output[0] = peek(top);
        pop(top);
        

    }
}