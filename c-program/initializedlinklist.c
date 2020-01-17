#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node {
    int data;
    struct node *next;
};
void insert(struct node *,int);
void print(struct node *);
int main()
{
    struct node  *start1 =NULL;
    insert(start1 ,27);
    insert(start1,37);
    insert(start1,47);
    insert(start1,57);
    insert(start1,67);
    print(start1);

    
}
void insert(struct node *head,int no)
{
  struct node * newnode ,*ptr;
  newnode =(struct node *)malloc(sizeof(struct node));
  newnode->data =no;
  if(head ==NULL)
  {
      newnode->next =NULL;
      head =newnode;
  }
  else
  {
      ptr = head;
            while(ptr->next != NULL)
                  ptr = ptr->next;
            ptr->next = newnode ;
            newnode->next = NULL;
  }
}
void print(struct node *start)
{
    struct node *ptr ;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }

}
