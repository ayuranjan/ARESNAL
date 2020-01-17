//reversing a list using stack

#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *top =NULL;
struct node *create(struct node *);
void display(struct node *);
struct node * reverse(struct node *);
//int pop(struct node *);
struct node * push(struct node *,int);
//int peek(struct node *);
int main()
{
       int option;

     do{
        printf("Enter -1 to exit \n");
        printf("Enter 1 to create list \n ");
        printf("Enter 2 to display  list\n");
        printf("Enter 3 to reverse the list\n");
    
        
        scanf("%d",&option);
        switch(option)
        {
       
            case 1 :start = create(start);
                    break;
            case 2 :display(start);
                    break;
            case 3 :reverse(start);
                    break;
            case 4:display(top);
                   break;
            

            
        }
     }while(option != -1);
return 0;

}


struct node * push(struct node * top ,int num )
{
    struct node *newnode ;
    newnode = (struct node *)malloc(sizeof(struct node ));
    newnode ->data = num;
   if(top ==NULL)
     { 
       newnode->next = NULL;
       top = newnode ;
     }
    else
    {
        newnode->next = top ;
        top = newnode ;
    }
    
 return top ;
}




struct node *create(struct node * start)
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
struct node * reverse(struct node *start)
{
 struct node *ptr ;
 ptr =start;
 while(ptr !=   NULL)
 {
     //num = ptr->data;
     push(top,ptr->data);
     ptr =ptr->next;

 }
 
display(top);
return start;
}
