#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *create(struct node *);
struct node *display(struct node * );
int main()
{
    int option ;
    do
    {
        printf("1.CREATE A LINKED LIST\n");
        printf("2.DISPLAYTHE LIST");
        printf("\nENTER THE OPTION ");
        scanf("%d",&option);
        switch(option)
        {
            case 1  : start = create(start);
                     printf("LINKED HAS BEEN CREATED");
                     break;
            case 2 : start = display(start);
                     break;

        }
    }while(option != 3 );
    return 0;
}
struct node *create(struct node *start)
{
    struct node *ptr , *newnode;
    int num;
    printf("ENTER -1 TO EXIT");
    printf("\n ENTER THE NUMBER");
    scanf("%d",&num);
    while(num != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode ->data = num;
        if(start == NULL)
        {
            newnode -> next = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
                ptr = ptr->next;
            ptr->next =newnode;
            newnode->next =NULL;
        }
        printf("\nENTER THE DATA");
        scanf("%d",&num);


    }return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("\%d",ptr->data);
        ptr = ptr->next;

    }return start;
}
