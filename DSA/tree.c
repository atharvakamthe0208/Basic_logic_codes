#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

struct Node *root=NULL;

void preorder()
{

    if(root==NULL)
    {
        printf("Tree is Empty ");
        return;

    }
    printf("\n");
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

    printf("\n");
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

    printf("\nInorder =");
    printf("%d->",root->left->data);
    printf("%d->",root->data);
    printf("%d",root->right->data);
   

}


int main()
{
    root=malloc(sizeof(struct Node));
    struct Node *second=malloc(sizeof(struct Node));
    struct Node *third=malloc(sizeof(struct Node));

    root->data=10;
    root->left=second;
    root->right=third;

    second->data=20;
    second->left=NULL;
    second->right=NULL;

    third->data=30;
    third->left=NULL;
    third->right=NULL;

    preorder();
    postorder();
    inorder();
    return 0;
}
