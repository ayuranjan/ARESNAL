#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;

};
struct node *start = NULL;
struct node *create(struct node *);
struct node *display(struct node *);

int main()
{
    start = create(start);
    start = display(start);
}
struct node *create(struct node *start)
{
    struct node *ptr,*newnode ;
    printf("ENTER -1 TO EXIT ");
    int value ;
    printf("ENTER THE NUMBER:");
    scanf("%d",&value);

    while(value != -1)
    {

         newnode = (struct node *)malloc(sizeof(struct node ));
         newnode->data =value;
         if (start == NULL)
           {
             newnode->next = NULL;
             start = newnode;
           }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
            {
              ptr = ptr ->next;
            }

            ptr ->next = newnode;
            newnode->next = NULL;
        }
        printf("ENTER THE NUMBER :");
        scanf("%d",&value);


    }
   return start;

};


struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("\t%d",ptr ->data);
        ptr = ptr ->next;

    }
    return start;
}

