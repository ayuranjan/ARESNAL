#include<stdio.h>
#include<stdlib.h>
#include<malloc/malloc.h>
struct node 
{
    struct node * left ;
    int data ;
    struct node * right ;
};
struct node * root = NULL;
struct node * insert(struct node * , int );
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);
void smallest(struct node * );
struct node * largest(struct node *);
int totalnodes(struct node *  );
struct node * delete(struct node * ,int );
int main()
{
    root = insert(root,51);
    root =insert(root,27);
    root =insert(root,64);
    root =insert(root,77);
    root =insert(root,46);
    preorder(root);
    printf("\n");
    root = delete(root,51);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    smallest(root);
    //largest(root);
    int n = totalnodes(root);
    printf("\n%d",n);

}
struct node *insert(struct node *root ,int val )
{
    if(root == NULL)
    {
        root =(struct node *)malloc(sizeof(struct node ));
        root->left =root->right = NULL;
        root->data = val;
        
    }
    else
    {
        if(val < root->data )
            root->left = insert(root->left,val);
        else if(val >root->data)
            root->right = insert(root->right,val);
        else
            printf("DUPLICATE ELEMENT NOT ALLOWED");

           
    }
    return root;
}

void preorder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    
}
void inorder(struct node * root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if( root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf(" %d ",root->data);
    }
}

void smallest(struct node * root )
{
    if(root->left == NULL)
        printf("%d",root->data);
    else 
         smallest(root->left);
}

struct node * largest(struct node *root)
{
    if(root->right == NULL)
        return root ;
    else
       return largest(root->right);
}

int totalnodes(struct node * root )
{
    if(root == NULL)
      {  return 0;}
    else
    {
       return  (totalnodes(root->left) +  totalnodes(root->right) + 1 );
    }

}

struct node * delete(struct node * root,int val)
{
    struct node * ptr ;
    ptr = root ;
    if(root == NULL)
        printf("not found ");
    else if (val < root ->data)
        delete(root->left,val);
    else if( val >root->data)
        delete(root->right,val);
    else if (root->left != NULL && root->right != NULL)//2 child
    {
        ptr = largest(root->left);
        root->data = ptr->data;
        delete(root->left ,ptr->data);
        
    }
    else
    {
        ptr = root ;
        if(root->left == NULL && root->right == NULL )
            root = NULL ;
        else if ( root->left != NULL)
            root = root->left ;
        else 
            root = root->right ;

        free(ptr);

    }

 return root ;
}

