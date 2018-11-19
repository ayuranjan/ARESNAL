#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node 
{
    int person ;
    struct node *next;
};
struct node *start,*ptr, *newnode ;
void main()
{
    int count ,n ;
    printf("Enter the number of players in the game :");

    scanf("%d",&n);
    printf("ENTER THE value of k i.e. kth person is elimanted");
    int k,i;
    scanf("%d",&k);
    start = malloc(sizeof(struct node ));
    start ->person = 1 ;
    ptr = start;
    for (i =2;i<= n ;i++)
    {
        newnode =malloc(sizeof(struct node ));
        ptr ->next =newnode;
        newnode ->person = i;
        newnode ->next =start;
        ptr = newnode;
    }
    for(count = n;count > 1 ;count --)
    {
        for(i =0;i<k-1;i++)
             ptr = ptr ->next;
        ptr->next = ptr ->next->next;
    }
    printf("THE WINNER IS %d",ptr ->person);
    
}