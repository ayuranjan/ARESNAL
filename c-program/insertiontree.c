#include<stdio.h>
#include<stdlib.h>

typedef struct tnode
{
	struct tnode* left;
	int info;
	struct tnode* right;
}tnode;
/*Helper function new node allocation*/
struct tnode* newNode(int val)
{
	struct tnode* node=(struct tnode*)malloc(sizeof(struct tnode));
	node->info=val;
	node->left=NULL;
	node->right=NULL;
	
	return node;
} 

struct tnode* insert_nonrecur(struct tnode* node,int val)
{
	struct tnode *ptr =node;
	struct tnode *parent= NULL;
	if(node==NULL)
	node= newNode(val);
	while(ptr!=NULL)
	{
		parent = ptr;
		if(val< ptr->info)
			ptr=ptr->left;
		else
			ptr=ptr->right;
	}
	if(val<parent->info)
		parent->left=newNode(val);
	else
		parent->right=newNode(val);
	node=parent;
	return node;
}

struct tnode* insert_recur(struct tnode* node, int val)
{
//if the tree is empty
	if(node==NULL)
	{
		node=newNode(val);
		return node;
	}
/*if the value is less than the node value*/
	if(val< node->info)
	{
		if(node->left!=NULL)
			insert_recur(node->left, val);
		else
			node->left=newNode(val);
	}
	else
	{
		if(node->right!=NULL)
			insert_recur(node->right,val);
		else
			node->right=newNode(val);
	}
	return node;
/*if the value is greater than the node value
	if(val> node->info)
	{
		node->right= insert_recur(node->right, val);
	}*/
	return node;
}
//Print the nodes in in order
void printinorder(struct tnode* node)
{
	if(node==NULL)
	return;
	printinorder(node->left);
	printf("%d", node->info);
	printinorder(node->right);
}
/*struct tnode* deletenode(struct tnode *pnode, int val)
{
	if(pnode==NULL)
		printf("Value not found\n");
	else if(val<pnode->info)
		deletenode(pnode->left, val);
	else if(val>pnode->info)
		deletenode(pnode->right, val);
	else if(pnode->left && pnode->right)
	{
		struct tnode *temp;
		
		temp=findlargestnode(pnode->left);
		pnode->info=temp->data;
		deletenode(pnode->left,temp->info);
	}
	else
	{
		temp=pnode;
		if(pnode->left=NULL && pnode->right=NULL)
			pnode=NULL;
		else if(pnode->left!=NULL)
			pnode=pnode->left;
		else
			pnode=pnode->right;
	}
	free(temp);
	return pnode;
}		*/


int main()
{
	struct tnode *root =NULL;
	root=insert_recur(root,30);
	root=insert_recur(root,20);
	root=insert_recur(root,40);
	root=insert_recur(root,70);
	root=insert_recur(root,60);
	root=insert_recur(root,80);
	//deletenode(root,70);
	printinorder(root);
	return 0;
}