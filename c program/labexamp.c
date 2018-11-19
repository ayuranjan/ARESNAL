include<stdio.h>
#include<malloc.h>
struct node {
    int data;
    struct node *next;
}
struct node *start =NULL;
struct node *create(struct node *,val);
struct node *display(struct node *);
struct node *insert_at_start(struct node *,int);
struct node *insert_at_end(struct node *,int);


int main()
{
    int choice ,val;
    do{
    printf("1.CREATE 2.DISPLAY 3.INSERT AT BEGGINING 4.INSERT AT END 5.INSERT AFTER A NODE 6.INSERT BEFORE A NODE  ");
    printf("ENTER YOUR CHOICE ");
    scanf("%d",&choice);
    switch(option)
    {
        case 1 :prinf("ENTER THE VALUE OF THE FIRST NODE :")
                scanf("%d",&val);
                start =create(start,val);
                break;
        case 2 :start =display(start);
                break;
        case 3: prinf("ENTER THE VALUE OF THE  NODE to be inserted at start:")
                scanf("%d",&val);
                start =insert_at_start(start,val);
                break;
        case 4: prinf("ENTER THE VALUE OF THE  NODE to be inserted at end :")
                scanf("%d",&val);
                start =insert_at_end(start,val);
                break;
    }

    }
    while(option != 7);
    return 0;
    
    
}
struct node *create(struct node *start )
{
    struct node *newnode ;
    
    newnode =(struct node *)malloc(sizeof(struct node ));
    newnode->data =num;
    newnode ->next = NULL;
    start =newnode;
    return start;


}
struct node *display(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr ->next;

    }
    return start;

}
struct node *insert_at_start(struct node *start, int val);
{
    struct node *newnode;
    newnode= (struct node *)malloc(sizeof(struct node ));
    newnode ->data =val;
    newnode ->next  = start;
    start =newnode;
    return start;
    
}
