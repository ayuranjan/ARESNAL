#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node {
    int data;
    struct node *next;
};
//struct node ll1,ll2;
struct node * create(struct node *);
void display(struct node *);
struct node *merge(struct node *,struct node *);
struct node *merge_sort(struct node *,struct node *);
struct node * start1 = NULL;
struct node * start2 =NULL;
struct node * start3 =NULL;


int main()
{
     int option,num,count;

     do{
        printf("Enter -1 to exit \n");
        printf("Enter 1 to create 1st list \n ");
        printf("Enter 2 to create 2nd list \n");
        printf("Enter 3 to display  1st list\n");
        printf("Enter 4 to display 2nd list \n");
        printf("Enter 5 to merge\n ");
        printf("Enter 6 to display merged list \n");
        printf("Enter 7 to merge in sorted order\n");
        
        scanf("%d",&option);
        switch(option)
        {
       
            case 1 :start1 = create(start1);
                    break;
            case 2 :start2 = create(start2);
                    break;
            case 3 : display(start1);
                    break;
            case 4 :display(start2);
                    break;
            case 5 : start1 =merge(start1,start2);
                     break;
            case 6: display(start3);
                     break;
            case 7: start3 = merge_sort(start1,start2);
                    break;

            
        }
     }while(option != -1);
return 0;
}
struct node * merge_sort(struct node *start1 ,struct node * start2)
{
    struct node *ptr1 ,*ptr2  ;
    ptr1 =start1 ;
    ptr2 =start2 ;
   
    if(ptr1 == NULL)
    {
        return start2; 
    }
    else if (ptr2 == NULL)
         return start1 ;
    if(ptr1->data >= ptr2->data)
        {
            start3 = ptr2 ;
            start3->next = merge_sort(ptr1,ptr2->next);

        }
    else
        {
            start3 = ptr1;
            start3->next = merge_sort(ptr1->next,ptr2);
        }

    

    return start3;


}
struct node * merge(struct node *start1, struct node *start2)
{
   
    struct node *ptr1 ,*ptr2;
    ptr1 = start1 ;
    ptr2 =start2;
    while(ptr1->next != NULL)
          ptr1 =ptr1->next;
    ptr1 ->next = ptr2 ;
    return start1;
}

struct node *create(struct node * start)
{
    struct node *ptr ,*newnode;
    int num;
    printf("Enter the value of node:");
    scanf("%d",&num);
    printf("Enter -1 to exit ");
    while(num!= -1)
    {
        newnode =(struct node *)malloc(sizeof(struct node));
        newnode->data =num;
        if(start == NULL)
        {
            newnode->next = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
                  ptr = ptr->next;
            ptr->next = newnode ;
            newnode->next = NULL;
        }
    printf("Enter the value of node:");
    scanf("%d",&num);
    printf("Enter -1 to exit ");

    }
 return start;
}

void display(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }

}