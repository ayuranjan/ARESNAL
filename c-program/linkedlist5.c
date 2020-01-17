#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_before(struct node *);
int main()
{
    int  choice;

    do
    {
        printf("1.CREATE A LINKED LIST ");
        printf("2.DISPLAY THW LINKED LIST");
        printf("3.INSERT BEFORE A NUMBER");
        printf("ENTER YOUR CHOICE ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : start = create(start);
                    printf("LINK HAS BEEN CRFEATED");
                    break;
            case 2 : start = display(start);
                    break;
            case 3: start = insert_before(start);
                     break;

        }
    }
    while(choice != 4);
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
struct node *insert_before(struct node *start)
{
    struct node *newnum, *ptr , *preptr ;
    newnum = (struct node *)malloc(sizeof(struct node ));
    printf("ENTER THE NUMBER TO BE INSERTED");
    int val,num;
    scanf("%d",&num);
    printf("ENTER THE NUMBER BEFORE WHICH IT IS INSERTED");
    scanf("%d",&val);
    newnum->data = num;
    ptr = start ;
    preptr = ptr;
    while(ptr->data != val)
    {
        preptr = ptr ;
        ptr = ptr ->next;
    }
    preptr ->next = newnum ;
    newnum ->next = ptr ;
    return start ;
};
