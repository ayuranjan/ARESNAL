#include<stdio.h>
#include<malloc/malloc.h>
#include<stdlib.h>

 struct node{
    int data;
    struct node *next;
};
struct node *start =NULL;
struct node *create(struct node *);
void display(struct node *);
struct node *duplicate_remove(struct node *);
void occurence(struct node *);
struct node *multiply(struct node *);
void non_zero(struct node *);
void is_sorted(struct node *);
int main()
{
    int option,num,count;

     do{
        printf("Enter -1 to exit \n");
        printf("Enter 1 to create \n ");
        printf("Enter 2 to display \n");
        printf("Enter 3 to remove duplicates \n ");
        printf("Enter 4 to check occurence of a given number :");
        printf("Enter 5 to multiply value of node with a specific number:");
        printf("Enter 6 to print non zero numbers");
        printf("Enter 7 to check if the list is sorted in ascending order or not \n");
        scanf("%d",&option);
        switch(option)
        {
            case 1 :start = create(start);
                    break;
            case 2 : display(start);
                    break;
            case 3 :start = duplicate_remove(start);
                    break;
            case 4 :occurence(start);
                    //printf(" The occurence of %d is %d",num,count);
                    break;
            case 5:start = multiply(start);
                   break;
            case 6:non_zero(start);
                   break;
            case 7:is_sorted(start);
                   break;
        }
     }while(option != -1);

}

void is_sorted(struct node *start)
{
   struct node *ptr,*preptr ;
   preptr =start ;
   int num =0,count=0;
   while(preptr!=NULL)
   {
       num ++;
       preptr =preptr->next;
   }
   preptr = start;
   ptr = preptr->next;
   while(ptr != NULL)
   {
       
      if(ptr->data >preptr->data)
          count++;
    preptr =preptr->next;
    ptr=ptr->next;
   }
   if(count+1 == num )
      printf("The list is Sorted\n");
    else 
     printf("The List is NOT Sorted\n");
}



void non_zero(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        if(ptr->data != 0)
            {
                printf("%d\n",ptr->data);}
        
        ptr = ptr->next;
    }

}
struct node *multiply(struct node *start)
{
    printf("Enter the specific number to be multiplied with \n");
    int num;
    scanf("%d",&num);
    struct node *ptr ;
    ptr =start;
    while(ptr != NULL)
    {
        ptr->data = ptr->data * num ;
        ptr = ptr->next;
    }
    return start;
}

void occurence(struct node *start)
{
    
    struct node *ptr ;
    int n = 0;
    int val;
    printf("Enter the value of number whose occurence you want to find");
    scanf("%d",&val);
    ptr =start;
    while(ptr != NULL)
    {
        if(ptr->data == val)
           n++;
    ptr = ptr->next ;
    }
    //return n;
    printf("the occurence of %d is %d\n",val,n);
}
struct node *duplicate_remove(struct node *start)
{
struct node *ptr ,*preptr,*postptr;
ptr=  start;


while(ptr != NULL)
{
    preptr = ptr;
    postptr = ptr->next;
   
    while(postptr != NULL)
    {
        

        if(ptr->data ==postptr->data)
        {
            preptr->next = postptr->next;
            postptr = postptr->next;
 
        } 
        preptr = preptr->next;
        postptr =postptr->next;

    }
    ptr =ptr->next;

}
return start;
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
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }

}

