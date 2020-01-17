#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *start  =NULL;
struct node *create(struct node *start);
struct node *display(struct node *start);
void main()
{
    int choice;
    do{
       
        printf("1.ADD A NEW NODE ");
        printf("2.DISPLAY THE LINKED LIST");
        printf("3.EXIT ");
        printf("ENTER YOUR CHOICE");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1 : start = create(start );
                    printf("THE LINKED HAS BEEN CREATED ");
                    break;
            case 3: start = display(start);
                    break;

        }
    }while(choice != 4);

}
struct node *create(struct node *start)
{
  struct node *ptr,*newnode;
  int value;
    printf("ENTER -1 TO EXIT \n");
    printf("ENTER THE VALUE OF THE  NODE\n ");
    scanf("%d",&value);
   while(value != -1)
   {
       newnode =(struct node *)malloc(sizeof(struct node ));
       newnode->data = value;
       if(start == NULL)
       {
           start = newnode;
           newnode->next = NULL;
       }
       else 
       {
           ptr = start;
           while(ptr ->next != NULL)
               ptr = ptr ->next;
            ptr ->next = newnode;
            newnode ->next =NULL;
       }
       printf("ENTER NEXT NUMBER ");
       scanf("%d",&value);
   }
   return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("\t%d",ptr ->data);
        ptr = ptr ->next;

    }
}