#include <stdio.h>
#include <stdlib.h>
struct  node
{
    int data;
    struct node *add;
};

struct node *head = NULL;

void inserttobegin(int val)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->add=head;

    head=newnode;
}

void display()
{
    struct node *temp=head;

    if(head==NULL)
    {
        printf("Linked list is empty ");
        return;
    }

    while (temp!=NULL)
    {
        printf("%d->\t",temp->data);
        temp=temp->add;
    }
    

}
void deletefrombegin()
{
    struct node * temp=head;

    if(head==NULL)
    {
        printf("Linked list is empty ");
        return;
    }

    head=temp->add;
    free(temp);

}

int main()
{
    inserttobegin(10);
    inserttobegin(20);
    inserttobegin(30);
    inserttobegin(40);
    display();
    deletefrombegin();
    printf("\n");
    display();
    return 0;
}