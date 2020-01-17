#include<stdio.h>
#include<malloc.h>
 struct node
 {
     int data;
     struct node *next;
 };
 struct node *start =NULL;
 struct node *create(struct node*);
 struct node *display(struct node *);
 struct node *insert_at_beg(struct node *);
 struct node *insert_at_end(struct node *);
 struct node *insert_after(struct node *);
 struct node *insert_before(struct node *);
 struct node *delete_beg(struct node * );
 struct node *delete_node(struct node*);
 struct node *delete_last(struct node * );
 struct node *delete_after(struct node *);
 struct node *delete_list(struct node *);
 struct node *sort(struct node *);
 int main()
 {
     int option ;
     do
     {
         printf("\n1.CREATE A LINKED LIST");
         printf("\n2.DISPLAY THE LINKED LIST");
         prinf("\n3.INSERT NODE AT THE BEGINNING");
         printf("\n4.IN.SERT NODE AT THE END");
         printf("\n5.INSERT NODE AFTER A NUMBER");
         printf("\n6.INSERT NODE BEFORE A GIVEN NUMBER");
         printf("\n7.DELETE NODE AT THE BEGINNING");
         printf("\n8.DELETE NODE AT THE END");
         printf("\n9.DELETE NODE AFTER A GIVEN NODE ");
         printf("\n10.DELETE A GIVEN NODE ");
         printf("\n11.DELETE THE ENTIRE LIST");
         printf("\n12.SORT THE LIST");
         printf("13.EXIT");
         printf("ENTER YOUR CHOICE ");
         scanf("%d",&option);
         switch (option)
         {
             case 1 : start = create(start);
                       printf("LIST HAS BEEN CREATED");
                       break;
            case 2  : start = display(start);
                       break;
            case 3 : start = insert_at_beg(start);
                        break;
            case 4 : start = insert_at_end(start);
                        break;
            case 5 : start = insert_after(start);
                      break;
            case 6: start = insert_before(start);
                     break;
            case 7 : start = delete_beg(start);
                     break;
            case 8 : start = delete_end(start);
                     break;
            case 9 : start = delete_after(start);
                       break;
            case 10 : start = delete_node(start);
                      break;
            case 11: start = delete_list(start);
                      break;
            case 12 : start = sort(start);
                       break;

         }

     }
     while(option != 13);
            return 0;
 }

struct node *create(struct node *start)
 {
     struct node *ptr ,*newnode;
     int num ;
     printf("ENTER -1 TO EXIT ");
     printf("ENTER THE NUMBER");
     scanf("%d",&num);
     while(num != -1)
     {
         newnode = (struct node * )malloc(sizeof(struct node));
         newnode ->data = num ;

         if(start == NULL )
         {
              newnode ->next = NULL;
              start = newnode;
         }
         else
         {
             ptr = start ;
             while(ptr != NULL)
             {
                 ptr = ptr ->next;
             }
             ptr->next= newnode;
             newnode ->next = NULL;
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
         printf("\n%d",ptr->data);
         ptr = ptr->next;
     }
     return start;

 }
struct node *insert_at_beg(struct node *start)
{
    struct nodde *newnode;
    int num;
    printf("ENTER THE NUMBER TO INSERTED:");
    scanf("%d",&num);
    newnode = (struct node *)malloc(sizeof(struct node ));
    newnode ->data = num;
    newnode->next =start;
    start = newnode;
    return start;
}

struct node insert_at_end(struct node *start)
{
    struct node *ptr,*newnode;
    int num ;
    printf("ENTER THE NUMBER TO BE INSERTED");
    scanf("%d",&num);
    newnode = (struct node *)malloc(sizeof(struct node ));
    ptr = start;
    while(ptr->next != NULL)
         ptr = ptr->next;
    ptr->next = newnode;
    return start;
}

struct node *insert_before(struct node *start)
{
    struct node *newnode ,*ptr,*preptr;
    int num, value;
    printf("ENTER THE NUMBER AND POSITION BEFORE WHICH  DATA HAS TO BE INSERTED");
    scanf("%d",&num,&value);
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = num;
    ptr = start;
    while (ptr->data !=value)
    {
     preptr = ptr ;
     ptr = ptr ->next;

    }
    preptr->next = newnode;
    newnode ->next = ptr;
    return start;
};


