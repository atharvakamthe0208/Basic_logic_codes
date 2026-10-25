#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

struct Node *root=NULL;
struct Node *createNode(int val){

    struct Node *newnode=malloc(sizeof(struct Node));

    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

void insert(int val)
{
    struct Node *newnode=createNode(val);

    if(root==NULL)
    {
        root=newnode;
        return;
    }

    struct Node **queue=malloc(10000*sizeof(struct Node *));

    int front=0,rear=0;
    queue[rear++]=root;

    while(front<rear){
        struct Node *temp=queue[front++];

        if(temp->left==NULL)
        {
            temp->left=newnode;
            free(queue);
            return;
        }

        queue[rear++]=temp->left;

        if(temp->right==NULL)
        {
            temp->right=newnode;
            free(queue);
            return;
        }

        queue[rear++]=temp->right;
    }
    free(queue);
}
void preorder(struct Node *node)
{
    if(node==NULL)
    {
        return;
    }

    printf("%d->",node->data);
    preorder(node->left);
    preorder(node->right);
}

void postorder(struct Node *node)
{
    if(node==NULL)
    {
        return;
    }

    
    postorder(node->left);
    postorder(node->right);
    printf("%d->",node->data);
}

void Inorder(struct Node *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    printf("%d->",node->data);
    Inorder(node->right);
    
}
int search(struct Node *node ,int key)
{
    if(node==NULL)
    {
        return 0;
    }

    if(node->data==key)
    {
        return 1;
    }

    return search(node->left,key)||search(node->right,key);
}    

int countNodes(struct Node *node)//a100
{
    if(node==NULL)
    {
        return 0;
    }

    return 1+countNodes(node->left)+countNodes(node->right);
}
int countleaves(struct Node *node)//A100
{
    if(node==NULL)
    {
        return 0;
    }

    if(node->left==NULL&&node->right==NULL){
        return 1;
    }

    return countleaves(node->left)+countleaves(node->right);
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    printf("Preorder  :");
    preorder(root);
    printf("\n");
    printf("Postorder :");
    postorder(root);
    printf("\n");
    printf("Inorder   :");
    Inorder(root);
    printf("\n");

    int key;
    printf("\nEnter Key :");
    scanf("%d",&key);
    int res=search(root,key);
    if(res){
        printf("Key Found \n");
    }else{
        printf("Key not found \n");
    }

    int count=countNodes(root);
    printf("\nNo of Nodes :%d",count);
   

    int leafnode=countleaves(root);
    printf("\nNo of Leaf nodes:%d",leafnode);

     return 0;
}