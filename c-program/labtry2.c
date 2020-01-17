#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    int priority;
    struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *,int,int);
struct stack *display(struct stack *);



int  main()
{
    int val,option,pri;
    do{
        printf("\n Main Menu");
        printf("\n 1.Push");
        printf("\n 2.DISPLAY");
        printf("\n 3.EXIT");
        printf("Enter your option");
        scanf("%d",&option);
        switch(option)
        {
            case 1: printf("\n Enter the number to be pushed on stack");
                    scanf("%d",&val);
                    printf("\n Enter the priority of that stack");
                    scanf("%d",&pri);
                    top = push(top,val,pri);
                    break;
            case 2: top = display(top);
                    break;
        }
    }
    while(option!=3);
    return 0;
}
struct stack *push(struct stack *top,int val,int pri)
{
    struct stack *ptr;
    ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->data = val;
    ptr ->priority = pri;
    if(top==NULL)
    {
        ptr->next = NULL;
        top = ptr;
    }
    else
    {
        ptr->next = top;
        top = ptr;
    }
    return top;
}
struct stack *display(struct stack *top)
{
    struct stack *ptr,*ptr1,*ptr2;
    ptr = top;

    int count = 0;
    if(top == NULL)
    printf("\n Stack empty");
    else
    {
        while(ptr != NULL &&count == 4)
        {

            ptr1 = ptr->next;
            ptr2 =ptr1 ->next;
            while(ptr1!=NULL && ptr2 !=NULL && count == 4)
            {
                if(ptr ->priority > ptr1 ->priority && ptr ->priority > ptr2 ->priority)
                {
                    printf("%d",ptr->data);
                }
                else if(ptr1 ->priority > ptr2 ->priority && ptr1 ->priority > ptr->priority)
                {
                    printf("%d",ptr1 ->data);
                }
                else 
                    printf("%d",ptr2 ->data);
            }
            
            
            count ++;
        }
    }
}
    return top;
}
/*{
            if(ptr->priority == ptr1->priority)
            {
            printf("\n %d",ptr->data,ptr->priority);
            ptr = ptr->next;
            }
            else if(ptr->priority > ptr1->priority)
            {
                printf("\n %d",ptr1->data,ptr1->priority);
                 ptr = ptr->next;
            }
            else
            {
                printf("\n %d",ptr->data,ptr->priority);
                 ptr = ptr->next;
            }*/