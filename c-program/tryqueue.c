#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node {
    int data;
    struct node * next;
};
struct queue{
    struct node * front;
    struct node * rear;
};
struct queue * q ;
void create(struct queue *);
struct queue *insert(struct queue *,int );
struct queue *delete(struct queue *);
struct queue *display(struct queue *);
int main()
{
    int val ,option;
    create(q);
    do{
        printf("Press 1.Insert  2.Delete  3.display");
        scanf("%d",&option );
        switch(option)
        {
            case 1 : printf("Enter the number to be inserted :");
                    scanf("%d",&val);
                    q =insert(q,val);
                    break;
            case 2 :q =delete(q);
                    break;
            case 3 :q =display(q);
                    break;
        }
    }while(option != -1);
    return 0;
}

void create(struct queue *q)
{
    q->rear = NULL;
    q->front =NULL;
}
struct queue *insert(struct queue *q,int val)
{
    struct node *ptr ;
    ptr =(struct node *)malloc(sizeof(struct node ));
    ptr->data =val;
    if(q->front == NULL)
    {
        q->front = ptr ;
        q->rear = ptr ;
        q->rear->next = q->front->next =NULL;
    }
    else{
        q->rear->next =ptr ;
        q->rear = ptr ;
        q->rear->next =NULL;
    }
    return q;
}

struct queue * display(struct queue * q )
{
    struct node *ptr ;
    ptr =q->front ;
    if(ptr ==NULL)
        printf("EMPTY ");
    else 
    {
        while(ptr!=q->rear )
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
        printf("%d",ptr->data);

    }
    return q ;
}

struct queue *delete(struct queue *q)
{
    struct node *ptr ;
    ptr =q->front ;
    if(q->front ==NULL)
        printf("overflow");
    else
    {
        q->front =q->front->next;
        printf("%d",ptr->data);
        free(ptr);
    }
    return q ;
}