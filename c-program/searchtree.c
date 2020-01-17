#include<stdio.h>
#include<stdlib.h>
typedef struct tnode
{
	struct tnode* left;
	int info;
	struct tnode* right;
}tnode;
tnode *LOC, *PAR;
/*Helper function new node allocation*/
struct tnode* newNode(int val)
{
	struct tnode* node=(struct tnode*)malloc(sizeof(struct tnode));
	node->info=val;
	node->left=NULL;
	node->right=NULL;
	
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
/*if the value is greater than the node value*/
	if(val> node->info)
	{
		node->right= insert_recur(node->right, val);
	}
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
void searchbinary(struct tnode* node, int item)
{
	tnode *ptr;
	ptr=node;
	if(node==NULL)
		return;
	if(item==node->info)
	{
		printf("item found");
		return;
	}
	if(item<node->info)
	{
		searchbinary(node->left,item);
	}
	if(item>node->info)
	{
		searchbinary(node->right,item);
	}
	
}
int main()
{
	struct tnode *root=NULL;
	root=insert_recur(root,30);
	insert_recur(root,40);
	insert_recur(root,20);
	insert_recur(root,15);
	insert_recur(root,25);
	insert_recur(root,45);
	insert_recur(root,55);
	printinorder(root);
	searchbinary(root,35);
	
}