#include<stdio.h>
#include<malloc/malloc.h>
struct node 
{
    int data;
    struct node *left ,*right;

};
struct node *tree = NULL;
struct node *insert(struct node *,int );
void preorder(struct node *);
int main()
{
    int choice , val;
    do{
        printf("1. INSERT A NODE IN BST 2 .PREORDER 3 .EXIT ");
        scanf("%d",&choice);
        switch(choice )
        {
            case 1 : printf("ENTER THE VALUE TO BE INSERTED IN BST");
                     scanf("%d",&val);
                     tree = insert(tree,val);
                     break;
            case 2 :  preorder(tree);
                     break;
           
        }
    }while(choice != 3);
}
struct node *insert(struct node *tree, int val)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node ));
    newnode ->data = val;
    if(tree == NULL)
    {
        tree = newnode;
        newnode ->left = newnode->right =NULL;
    }
    else 
    {
        struct node *nodeptr ,*ptr;
        nodeptr = tree;
        ptr =NULL;
        while(nodeptr != NULL)
        {
            ptr = nodeptr;
            if(val <nodeptr->data )
                nodeptr = nodeptr ->left;
            else 
                nodeptr = nodeptr ->right;
        }
        if(val < ptr ->data)
            ptr ->left = newnode;
        else 
            ptr ->right = newnode;
    }
    return tree;
}
void preorder( struct node *tree)
{
    while(tree != NULL)
    {
        printf("%d\t",tree->data);
        preorder(tree ->left);
        preorder(tree ->right);
    }
}