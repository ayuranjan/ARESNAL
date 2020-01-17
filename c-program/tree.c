#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct tree_node{
    int data;
    struct tree_node *left ;
    struct tree_node *right ;
};
struct tree_node *tree =NULL;
struct tree_node *insert(struct tree_node *,int );
void preorder(struct tree_node *) ;
void inorder(struct tree_node *);
void postorder(struct tree_node *);
void smallest(struct tree_node *);
void largest(struct tree_node *);
//struct tree_node *delete(struct tree_node *,int );
//struct tree_node *mirror_image(struct tree_node *);
int total_nodes(struct tree_node *);
int external_nodes(struct tree_node *);
int internal_nodes(struct tree_node * );
int height(struct tree_node *);
int main()
{
    int choice, val;
do{
    printf("1.INSERT 2.PREORDER 3.INORDER 4.POSTORDER 5.SMALLEST NODE 6 .LARGEST NODE 7.DELETE A NODE 8. MIRRORIMAGE 9 .TOTAL NODE 10.EXTERNAL NODE 11.INTERNAL NODE 12.HEIGHT 13.EXIT ");
    printf("enter your choice :");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1 : printf("ENTER THE VALUE TO BE INSERTED :");
               scanf("%d",&val);
               tree = insert(tree,val);
                break;
        case 2 : preorder(tree);
                 break;
        case 3 : inorder(tree);
                 break;
        case 4 : postorder(tree);
                break;
        case 5 : smallest(tree);
                 break;
        case 6 : largest(tree);
                 break;
        case 8 :printf("%d",total_nodes(tree));
                break;
        case 9: printf("%d",internal_nodes(tree));
                break;
        case 10:printf("%d",external_nodes(tree));
               break;
        case 11: printf("%d",height(tree));
                 break;
    }
 }
    while(choice != 13);
    return 0;
    
    
}
/*struct tree_node *insert(struct tree_node *tree,int val)
{
    struct tree_node *newnode ;
    newnode =(struct tree_node *)malloc(sizeof(struct tree_node));
    if(tree == NULL)
    {
        newnode ->data =val;
        newnode ->left = NULL;
        newnode ->right = NULL;
    }
    else 
    {
        if(val <tree ->data)
             insert(tree->left ,val);
        else 
             insert(tree ->right,val);
    }
    return tree;
}*/


void preorder(struct tree_node *tree)
{
    if(tree != NULL)
    {
        printf("%d\t",tree ->data);
        preorder(tree ->left );
        preorder(tree ->right);
    }
}
void postorder(struct tree_node *tree)
{
    if(tree != NULL)
    {
        postorder(tree ->left);
        postorder(tree ->right);
        printf("%d\t",tree ->data);
    }
}
void inorder(struct tree_node *tree)
{
    if(tree != NULL)
    {
        inorder(tree ->left );
        printf("%d\t",tree ->data);
        inorder(tree ->right);

    }
}

void smallest(struct tree_node *tree)
{
    if( (tree == NULL) || (tree ->left == NULL) )
        printf("%d",tree ->data);
    else 
         smallest(tree ->left);
    printf("%d",tree->data);
}
void largest(struct tree_node *tree)
{
    if((tree == NULL) || (tree ->right == NULL))
         printf("%d",tree->data);
    else 
          largest(tree ->right);
    printf("%d",tree ->data);
}
int total_nodes(struct tree_node *tree )
{
    if(tree == NULL)
        return 0;
    else 
        return (total_nodes(tree ->left) + total_nodes(tree ->right) + 1);
}
int internal_nodes(struct tree_node *tree)
{
    if( (tree ==NULL) || ((tree ->left == NULL) && (tree ->right == NULL)) )
        return 0;
    else 
        return (internal_nodes(tree->left )  +internal_nodes(tree ->right ) + 1);
}
int external_nodes(struct tree_node *tree)
{
    if( tree == NULL)
        return 0;
    else if((tree ->left == NULL) && (tree ->right == NULL))
         return 1 ;
    else 
         return (external_nodes(tree ->right) + external_nodes(tree ->left) );
}

int height(struct tree_node *tree )
{
    int leftheight , rightheight;
    if(tree == NULL)
       return 0;
    else 
    {
        leftheight = height(tree ->left);
        rightheight = height(tree ->right);
        if(leftheight > rightheight)
           return (leftheight +1);
        else 
           return (rightheight +1 );
    }
}