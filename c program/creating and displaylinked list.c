#include<stdio.h>
#include<malloc.h>


struct node{
 int data;
 struct note *next;
};
struct node *start =NULL;
struct node *create(struct node *);
struct node *display(struct node *);
int main()
{
    int choice;
    do
    {
        printf("1.CREATE A LINKED LIST ");
        printf("2.DISPLAY THW LINKED LIST");
        printf("3.exit");
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
    while(choice != 4);
    return 0;

}
struct node *create(struct node *start)
{
    int num;
    struct node *ptr,*newnode;
    printf("ENTER -1 TO EXIT ");
    printf("ENTER THE NUMBER");
    scanf("%d",&num);
    while(num != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode ->data = num;


        if(start == NULL)
        {
            newnode ->next = NULL;
            start = newnode;
        }
        else
        {
            ptr =start;
            while(ptr->next != NULL)
                   ptr = ptr->next;
            ptr->next =newnode;
            newnode->next =NULL;
        }
        printf("ENTER THE NUMBER:");
        scanf("%d",&num);

    }
    return start;

}
struct node *display(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr= ptr ->next;
    }
    return start;
}

