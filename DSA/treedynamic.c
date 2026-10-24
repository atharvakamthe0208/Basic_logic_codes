#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

struct Node *root=NULL;
void insert(int val)
{
    struct Node *current=malloc(sizeof(struct Node));
    current->data=val;
    current->left=NULL;
    current->right=NULL;

    if(root==NULL)
    {
        root=current;
        return;
    }

    if(root->left==NULL)
    {
        root->left=current;
        return;

    }
    if(root->right==NULL)
    {
        root->right=current;
        return;
    }

}
void preorder()
{

    if(root==NULL)
    {
        printf("Tree is Empty ");
        return;

    }
    printf("\nPreorder  =");
    printf("%d->",root->data);
    printf("%d->",root->left->data);
    printf("%d",root->right->data);

}
void postorder()//left right root
{

    if(root==NULL)
    {
        printf("Tree is Empty ");
        return;

    }

    printf("\nPostorder =");
    printf("%d->",root->left->data);
    printf("%d->",root->right->data);
    printf("%d",root->data);

}
void inorder()//left root right 
{

    if(root==NULL)
    {
        printf("Tree is Empty ");
        return;

    }

    printf("\nInorder   =");
    printf("%d->",root->left->data);
    printf("%d->",root->data);
    printf("%d",root->right->data);
   

}


int main()
{


    insert(10);
    insert(20);
    insert(30);
    preorder();
    postorder();
    inorder();
    return 0;
}
