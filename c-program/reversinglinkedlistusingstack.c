#include<stdio.h>
#include<malloc/malloc.h>
#include<stdlib.h>
#define max 10
 struct node{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node * create(struct node *);
void display_list(struct node *);
int stack[max] ,top = -1;
void push(int stack[],int val );
int pop(int stack[]);
void display_stack(int stack[]);
struct node * reverse(struct node *start , int stack[]);
int main()
{   
    start = create(start);
    display_list(start);
    start = reverse(start,stack);
    display_list(start);
    return 0;
}
struct node * reverse(struct node *start ,int stack[])
{
    struct node *ptr ,*ptr2;
    ptr =start ;
    ptr2 =start;
    int val;
    while(ptr != NULL)
    {
       val =ptr->data;
       push(stack,val);
       ptr= ptr->next;
    }
    while(ptr2 != NULL)
    {
        val = pop(stack);
        ptr2->data = val ;
        ptr2 =ptr2->next;
    }
 return start ;
}

void push(int stack[],int val)
{
    if(top == max -1 )
        printf("OVERFLOW");
    else
       { top = top +1 ;
        stack[top] = val;}
}

int pop(int stack[])
{
    if (top == -1 )
     {   printf("UNDERFLOW");
         return -1;}
    else{
        //printf("%d",stack[top]);
        int poped_num;
        poped_num = stack[top];
        top--;
        return poped_num ;
    }
}

  
struct node* create(struct node * start)
{
    struct node *ptr ,*newnode;
    int num;
    printf("Enter the value of node:");
    scanf("%d",&num);
    printf("Enter -1 to exit ");
    while(num!= -1)
    {
        newnode =(struct node *)malloc(sizeof(struct node));
        newnode->data =num;
        if(start == NULL)
        {
            newnode->next = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
                  ptr = ptr->next;
            ptr->next = newnode ;
            newnode->next = NULL;
        }
    printf("Enter the value of node:");
    scanf("%d",&num);
    printf("Enter -1 to exit ");

    }
 return start;
}

void display_list(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

}
void display_stack(int stack[])
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