#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node {
    int data;
    int priority;
    struct node * next ;

};
struct node * start = NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
void display(struct node *);
int main()
{
    start = insert(start);
    start = insert(start);
    start = insert(start);
    display(start);
    start = delete(start);
    display(start);
    return 0 ;
}
struct node *insert(struct node *start)
{
    int val,pri;
    struct node *ptr ,*newnode;
    ptr = start ;
    newnode = (struct node *)malloc(sizeof(struct node ));
    printf("ENTER THE DATA & PRIORITY");
    scanf("%d%d",&val,&pri);
    newnode->data = val;
    newnode->priority = pri;
    if(start == NULL)
    {
        newnode->next  =start;
        start = newnode;
        start->next =NULL;
    }
    else if (pri< start->priority)
    {
        newnode->next  =start;
        start = newnode;
    }
    else{
        while(ptr->next != NULL && ptr->next->priority <= pri)
            ptr =ptr->next;
        newnode->next =ptr->next;
        ptr->next =newnode ; 
    }
return start;
}
void display(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    if(ptr == NULL)
        printf("EMPTY");
    else
    {
        printf("Priority is ");
        while(ptr != NULL)
        {
            printf("\n %d %d",ptr->data,ptr->priority);
            ptr=ptr->next;
        }
    }
}

struct node * delete(struct node *start)
{
    struct node *ptr ;
    ptr =start;
    if(ptr == NULL)
        printf("EMPTY");
    else
    {
        printf("\n Deleted element is %d %d",ptr->data,ptr->priority);
        start = start->next;
        free(ptr);
    }
    return start;
}