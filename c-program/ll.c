#include<stdio.h>
#include<malloc/malloc.h>
#include<stdlib.h>

 struct node{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node * create(struct node *);
void display(struct node *);
struct node *insert_at_beg(struct node *);
struct node *insert_at_end(struct node *);
struct node *insert_after(struct node *,int);
struct node *insert_before(struct node *,int);
struct node *delete_at_beg(struct node*);
struct node *delete_end(struct node *);
struct node *sort(struct node *);
int main()
{
    int option ;
    do{
        printf("Enter -1 to exit ");
        printf("Enter 1 to create  ");
        printf("Enter 2 to display ");
        printf("Enter 3 to insert at beginning  ");
        printf("Enter 4 to insert at end  ");
        printf("Enter 5 to insert after specific value ");
        printf("Enter 6 to insert before specific value ");
        printf("Enter 7 to delete the first element");
        printf("Enter 8 to delete the last element");
        printf("ENTER 9 TO ORT THE ELEMENTS::");
        scanf("%d",&option);
        int n;
        switch(option)
        {
            case 1 : start =create(start);
                    break;
            case 2 : display(start);
                    break;
            case 3 :start = insert_at_beg(start);
                    break;
            case 4: start = insert_at_end(start);
                    break;
            case 5: printf("Enter the number after which you want to enter :");
                    scanf("%d",&n);
                    start = insert_after(start,n);
                    break;
            case 6: printf("ENter the number before which you want to insert:");
                    scanf("%d",&n);
                    start = insert_before(start,n);
                    break;
            case 7:start = delete_at_beg(start);
                   break;
            case 8: start = delete_end(start);
                    break;
            case 9: start = sort(start);
                    break;



        }

    }while(option != -1);


return 0;
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

void display(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }

}

struct node *insert_at_beg(struct node *start)
{
  printf("Enter the value of number :");
  int num ;
  scanf("%d",&num);
  struct node *newnode ;
  newnode = (struct node *)malloc(sizeof(struct node ));
  newnode->data = num;
  newnode->next =start;
  start = newnode ;
  return start;
}

struct node *insert_at_end(struct node *start)
{
    struct node *ptr ,*newnode ;
    newnode = (struct node *)malloc(sizeof(struct node ));
    printf("Enter the value to be inserted :");
    int num ;
    scanf("%d",&num);
    newnode->data = num;
    newnode->next =NULL;
    ptr = start;
    while(ptr->next != NULL)
           ptr = ptr->next;
    ptr->next =newnode;
    return start;
}

struct node *insert_after(struct node *start,int n)
{
    struct node *ptr,*preptr ,*newnode ;
    newnode = (struct node *)malloc(sizeof(struct node ));
    printf("Enter the value of node");
    int num;
    scanf("%d",&num);
    newnode->data = num;
    ptr =preptr = start;
    while(preptr->data != n  )
    {
        preptr = ptr ;
        ptr = ptr->next;
    }
    preptr->next =newnode;
    newnode->next =ptr ;
    return start;

}
struct node *insert_before(struct node *start,int n)
{
    struct node *ptr,*preptr ,*newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of node :");
    int num ;
    scanf("%d",&num);
    newnode->data =num;
    preptr =ptr =start;
    while(ptr->data != n)
    {
        preptr =ptr ;
        ptr =ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr ;
    return start;
}
struct node *delete_at_beg(struct node *start)
{
    start = start->next;
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr ,*preptr;
    ptr =preptr=start;
    while(ptr->next != NULL)
    {
        preptr =ptr ;
        ptr =ptr->next;
    }
    preptr->next = NULL;
    return start;
}

struct node *sort(struct node *start)
{
    struct node *ptr ,*preptr;
    int val,count = 0,i;
    ptr =preptr = start;
    while(ptr!= NULL)
    {
        count ++;
        ptr = ptr->next;
    }
    //printf("%d",count);
    for(i=0;i<count;i++)
    {
        ptr =preptr->next;
        while(ptr != NULL)
        {
            if(preptr->data >ptr->data)
            {
                val =preptr->data;
                preptr->data =ptr->data;
                ptr->data = val;
            }
            ptr =ptr->next;
        }
        preptr =preptr->next;
    }
    return start;
}