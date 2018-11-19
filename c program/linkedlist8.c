#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
int main()
{
    int  choice;

    do
    {
        printf("1.CREATE A LINKED LIST ");
        printf("2.DISPLAY THW LINKED LIST");
        printf("3.DELETE NODE AFTER A GIVEN NUMBER");
        printf("4.DELETE THE LIST ");
        printf("ENTER YOUR CHOICE ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : start = create(start);
                    printf("LINK HAS BEEN CRFEATED");
                    break;
            case 2 : start = display(start);
                    break;
            case 3 : start = delete_after(start);
                      break;
            case 4 : start = delete_list(start);
                     printf("THE LIST IS EMPTY ");
                      break;

        }
    }
    while(choice != 5);
    return 0;

}
struct node *create(struct node *start)
{
    struct node *ptr , *newnode;
    int value;
    printf("ENTER -1 TO EXIT \n");
    printf("ENTER THE VALUE OF THE  NODE\n ");
    scanf("%d",&value);
    while(value != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        if(start ==NULL)
            {newnode ->next = NULL;
            start = newnode;
            }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
                    ptr = ptr ->next ;
            ptr->next = newnode;
            newnode ->next =NULL;

        }
        printf("ENTER THE NUMBER");
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
    return start;
}

struct node *delete_after(struct node *start)
{
    struct node *ptr , *preptr ;
    printf("ENTER THE NUMBER AFTER WHICH NODE IS TO BE DELETED");

    int num;
    scanf("%d",&num);
    ptr = start;
    preptr = start;
    while(preptr ->data != num)
    {
        preptr =ptr ;
        ptr = ptr ->next;
    }
    preptr  ->next = ptr ->next;
    return start;
};

struct node *delete_list(struct node *start)
{
    start =NULL;
    return start;N

};
