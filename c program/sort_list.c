#include<stdio.h>
#include<stdlib.h> 
#include <malloc/malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *sort(struct node *);
int main()
{
    int  choice;

    do
    {
        printf("1.CREATE A LINKED LIST ");
        printf("2.DISPLAY THW LINKED LIST");
        printf("3.SORT 4.EXIT");
        printf("ENTER YOUR CHOICE ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : start = create(start);
                    printf("LINK HAS BEEN CRFEATED");
                    break;
            case 2 : start = display(start);
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
struct node *sort(struct node *start)
{
    struct node *ptr1,*ptr2;
    int temp;
    ptr1=start;
    while(ptr1->next !=NULL)
    {
        ptr2 = ptr1 ->next;
        while(ptr2 !=NULL)
        {
            if(ptr1 ->data > ptr2 ->data)
            {
                temp =ptr1 ->data;
                ptr1 ->data = ptr2 -> data;
                ptr2 ->data =temp;
            }
            ptr2 = ptr2 ->next;
        }
        ptr1 = ptr1 ->next;
    }
    return start;
}