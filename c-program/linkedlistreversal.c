#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node *next;
};
void createlist(struct Node **phead, int n);
void displaylist(struct Node **phead);
void insertbeg(struct Node **phead, int val);
void insertend(struct Node **phead, int val);
void insertmiddle(struct Node **phead,int a, int valb);
void pushatend(struct Node **phead);
void deletef(struct Node **phead);
void deleteval(struct Node **phead, int val);
void reverselist(struct Node **phead);
int main()
{
	struct Node *head;
	int val, n;
	printf("Enter the no. of nodes\n");
	scanf("%d", &n);
	createlist(&head, n);
	displaylist(&head);
	reverselist(&head);
	displaylist(&head);
	
	
}
void createlist(struct Node **phead, int n)
{
	struct Node *newnode, *temp;
	int val,i;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the vale of 1st node:\n");
	scanf("%d", &val);
	newnode->info=val;
	newnode->next=NULL;
	*phead=newnode;
	for(i=2;i<=n;i++)
	{
		newnode=(struct Node*)malloc(sizeof(struct Node));
		if(newnode==NULL)
			printf("overflow");
		else
		{
			printf("Enter the value of %d node:\n",i);
			scanf("%d", &val);
			newnode->info=val;
			newnode->next=NULL;
			if(*phead==NULL)
			return;
			else
			{
				temp=*phead;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=newnode;
			}
		}
	}
}

void insertmiddle(struct Node **phead, int a, int valb)
{
	struct Node *new;
	new=(struct Node*)malloc(sizeof(struct Node));
	struct Node* temp=*phead;
	struct Node* temp2=temp->next;
	new->info=a;
	if(temp->info==valb)
	{
		insertbeg(phead, a);
		return;
	}
	while(temp2->info!=valb)
	{
		temp2=temp2->next;
		temp=temp->next;
	}
	new->next=temp->next;
	temp->next=new;
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
void insertbeg(struct Node **phead, int val)
{	
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(NULL==temp)
	{
		printf("overflow");
		return;
	}
	else
	{
		temp->info=val;
		temp->next=NULL;
		temp->next=*phead;
		*phead=temp;
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
void deletef(struct Node **phead)
{
	struct Node *temp;
	temp=*phead;
	*phead=(*phead)->next;
	printf("deleted value: %d\n",temp->info);
	free(temp);
}
void deleteval(struct Node **phead, int val)
{
	struct Node *temp, *temp2;
	temp=*phead;
	temp2=temp->next;
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	if(temp->info==val)
	{
		*phead=(*phead)->next;
		printf("deleted value: %d\n",temp->info);
		free(temp);
	}
	while(temp2->info!=val)
	{
		temp2=temp2->next;
		temp=temp->next;
	}
	temp->next=temp2->next;
	printf("deleted value: %d\n",temp2->info);
	free(temp2);
}
void reverselist(struct Node **phead)
{
	struct Node *next=NULL;
	struct Node *current=*phead;
	struct Node *prev=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*phead=prev;
}
