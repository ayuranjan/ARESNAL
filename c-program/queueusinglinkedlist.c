#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node{
    int data;
    struct node * next ;
};
struct queue
{
    struct node * rear;
    struct node * front ;
};
struct queue * q ;
void create(struct queue *);
struct queue * push(struct queue * , int );
struct queue * pop(struct queue *);
void display(struct queue * );
int main()
{
    create(q);
    q = push(q,7);
    q = push(q,19);
    q =push(q,69);
    display(q);
    q =pop(q);
    display(q);
    return 0;
}
void create (struct queue * q)
{
    q->rear = NULL;
    q->front = NULL;
}
struct queue * push(struct queue * q ,int val)
{
   struct node * newnode ;
   newnode = (struct node *)malloc(sizeof(struct node ));
   newnode->data = val;
   if(q->front == NULL)
   {
       q->front = newnode ;
       q->rear = newnode ;
       q->front->next = q->rear->next  =NULL;
   }
   else
   {
       q->rear->next = newnode ;
       q->rear = newnode ;
       q->rear->next =NULL;
       
   }
   return q ;
}
struct queue * pop(struct queue * q)
{
    if(q->front == NULL)
        printf("EMPTY QUEUE");
    else
    {
        printf("Number poped is %d",q->front->data);
        q->front = q->front->next;
    }
    return q ;
}

void display(struct queue * q )
{
    struct queue * ptr ;
    ptr = q ;
    if(ptr->front == NULL)
        printf("EMPTY");
    else
    {
        while(ptr->front != ptr->rear)
        {
            printf("%d\n",ptr->front->data);
            ptr->front = ptr->front->next;
        }
        printf("%d",ptr->front->data);

    }
    
}

