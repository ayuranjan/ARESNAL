#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node{
    int data;
    struct node *next;
}list1,list2;
struct node * create(struct node *);
void display(struct node *);
struct node *copy (struct node *,struct node *);
struct node *start1 =NULL;
struct node *start2 =NULL;

int main()
{
  int option,num,count;

     do{
        printf("Enter -1 to exit \n");
        printf("Enter 1 to create \n ");
        printf("Enter 2 to display \n");
        printf("Enter 3 to copy \n ");
        //printf("Enter 4 to check occurence of a given number :");
        //printf("Enter 5 to multiply value of node with a specific number:");
        //printf("Enter 6 to print non zero numbers");
        //printf("Enter 7 to check if the list is sorted in ascending order or not \n");
        scanf("%d",&option);
        switch(option)
        {
            case 1 :start1 = create(start1);
                    break;
            case 2 : display(start2);
                    break;
            case 3:start2 = copy(start1,start2);
                   break;
        }
     }while(option != -1);

}

struct node *copy(struct node *start1,struct node *start2)
{
   struct node *ptr,*preptr ;
   ptr = start1 ;
   preptr = start2 ;
   while(ptr != NULL)
   {
       struct node *newnode;
       newnode = (struct node *)malloc(sizeof(struct node));
       newnode->data = ptr->data;
       newnode->next = NULL;
       if (preptr == NULL)
       {
           preptr= newnode;
           newnode->next = NULL;
       }
       else
       {
           preptr->next = newnode;
           preptr = newnode;
       }
       
   }
   return start2;
}

struct node *create(struct node *start1){
    struct node *ptr ,*newnode;
    int num;
    printf("Enter the value of node:");
    scanf("%d",&num);
    printf("Enter -1 to exit ");
    while(num!= -1)
    {
        newnode =(struct node *)malloc(sizeof(struct node));
        newnode->data =num;
        if(start1 == NULL)
        {
            newnode->next = newnode;
            start1 = newnode;
        }
        else
        {
            ptr = start1;
            while(ptr->next != start1)
                  ptr = ptr->next;
            ptr->next = newnode ;
            newnode->next = start1;
        }
    printf("Enter the value of node:");
    scanf("%d",&num);
    printf("Enter -1 to exit ");

    }
 return start1;
}

void display(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }

}
