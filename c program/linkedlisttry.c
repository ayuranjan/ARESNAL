#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;//STRUCT TYPE BECAUSE IT WILL STORE ADDDRESS OF TYPE STRUCT NODE
};
struct node * start= NULL;   //IT WILL STORE address of 1st node and initialise it to null
struct node * create(struct node *start)
{
    struct node *newnode,*ptr;
    int num;
    printf("ENTER -1 TO EXIT ");
    printf("ENTER THE NUMBER");
    scanf("%d",&num);
    while (num != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));//sizeof(struct node) - calculate the byte required to store the node , to allocate it to memory we use malloc , since return type of malloc is void so we have to type caste it.
        newnode ->data = num;


        if (start ==NULL )
        {
            start = newnode;
        }
        else
        {
            ptr = start;
            while(ptr ->next != NULL)
            {
                ptr = ptr ->next;
            }
            ptr->next = newnode;
            newnode ->next =NULL;
        }
        printf("ENTER THE DATA");
        scanf("%d",&num);
    }
    return start;
};
struct node * display(struct node *start)
{
   struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
     printf("%d",ptr->data);
     ptr = ptr->next;
    }
    return start;
};
struct node *numberofnodes(struct node *start)
{
    struct node *ptr;
    ptr = start;
    int count =0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;

    }
    printf("%d",count);
    return start;
};
int main()
{
    int choice ;
    do
    {
        printf("1.TO CREATE A LINKED LIST\n");
        printf("2.DISPLAY THE LINKED LIST\n");
        printf("3.TO COUNT NUMBER OF NODES\n");
        printf("4.EXIT\n");
        printf("ENTER YOUR CHOICE :");
        scanf("%d",choice);
        switch (choice)
        {
            case 1 : start = create(start); //because function will return address of first node of type struct node * so we used start which is of same data type
                        printf("LINKED LIST CREATED");
                        break;
            case 2 : start = display(start);
                         break;
            case 3 : start = numberofnodes(start);

        }
    }while(choice != 4 );
    return 0;
}
