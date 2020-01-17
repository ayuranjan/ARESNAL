#include<stdio.h>
#include<stdlib.h>
struct Node 
{
	int info;
	struct Node *next;
};
void createlist(struct Node **phead, int n);
void displaylist(struct Node **phead);
void pushatbeg(struct Node **phead);
void pushatend(struct Node **phead);
int main()
{
	int n;
	struct Node *head;
	printf("Enter no.of nodes:");
	scanf("%d", &n);
	createlist(&head,n);
	printf("the linked list is:\n");
	pushatbeg(&head);
	pushatend(&head);
	displaylist(&head);
}
void createlist(struct Node **phead, int n)
{
	int val,i;
	struct Node *new_node, *temp;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(new_node==NULL)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		printf("Enter the value of 1st node:\n");
		scanf("%d",&val);
		new_node->info=val;
		new_node->next=NULL;
		*phead=new_node; 
	}
	for(i=2;i<=n;i++)
	{
		new_node=(struct Node*)malloc(sizeof(struct Node));
			
			if(new_node==NULL)
			{
				printf("oveflow");
			}
			else
			{
				printf("Enter the value of %d node:\n",i);
				scanf("%d",&val);
				new_node->info=val;
				new_node->next=NULL;
				if(NULL==(*phead))
				return;
				else
				{
					temp=*phead;
					new_node->next=temp;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}*phead=new_node;
				}
			}
		}
}
void displaylist(struct Node **phead)
{
	struct Node *temp;
	temp=*phead;
	while(temp!=NULL)
	{
		printf("Data=%d\n", temp->info);
		temp=temp->next;
		
	}
}		
void pushatbeg(struct Node **phead)
{
	struct Node *new_node;
	int val;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the value of new node to insert at beg:\n");
	scanf("%d",&val);
	new_node->info=val;
	new_node->next=NULL;
	if(NULL==(*phead))
	return;
	else
	{
		new_node->next=*phead;
		*phead=new_node;
	}
}
void pushatend(struct Node **phead)
{
	struct Node *new_node,*temp;
	int val;
	new_node=(struct Node*)malloc(sizeof(struct Node));
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the value of new node to insert at end:\n");
	scanf("%d",&val);
	new_node->info=val;
	new_node->next=NULL;
	if(NULL==(*phead))
	return;
	else
	{
		temp=*phead;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
	}
}