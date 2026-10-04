#include <stdio.h>
#include <stdlib.h>
struct  node
{
    int data;
    struct node *add;
};

struct node *head = NULL;

void inserttoend(int val)
{
    struct node *newnode=malloc(sizeof(struct node));

    newnode->data=val;
    newnode->add=head;

    if(head==NULL)
    {
        head=newnode;
        newnode->add=head;
        return;

    }

    struct node *temp=head;

    while(temp->add!=head)
    {
        temp=temp->add;
    } 

    temp->add=newnode;

}
void deletefromend()
{
    struct node *temp=head;
    if(head == NULL)
    {
        printf("Linked list is empty 1");
        return;
    }
    if(head->add==head)
    {
        head=NULL;
        return;
    }
    while (temp->add->add!=head)
    {
        temp = temp->add;

    }
    free(temp->add);
    temp->add = head;
    
}

void insertobegin(int val)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->add=NULL;

    if(head==NULL)
    {
        head=newnode;
        newnode->add=head;
        return;
    }

    newnode->add=head;
    struct node *temp=head;

    while(temp->add!=newnode->add)
    {
        temp=temp->add;
    }

    temp->add=newnode;
    head=newnode;
}
void deletefrombegin()
{
    

    if(head==NULL)
    {
        printf("\nlinked list is empty");
    }
    struct node *temp=head;
    
    if(head->add == head)
    {
        free(head);
        head = NULL;
        printf("\nValue removed");
        return;
    }

    while (temp->add!=head)
    {
        temp=temp->add;
    }

    struct node *del=head;
    head=head->add;
    temp->add=head;
    free(del);
    printf("\n value removed ");
}
void display()
{
        struct node *temp=head;

        if(head==NULL)
        {
            printf("\nLinked list is empty ");
            return;
        }

        while (temp->add!=head)
        {
            printf("%d->\t",temp->data);
            temp=temp->add;
        }
        printf("%d->\t\n",temp->data);
    

}

int main()
{
    insertobegin(10);
    insertobegin(20);
    insertobegin(30);
    insertobegin(40);
    display();
    inserttoend(100);
    inserttoend(200);
    // inserttoend(30);
    // inserttoend(40);
    display();\
    deletefrombegin();
    display();
    // deletefromend();
    // display();
    // deletefromend();
    // display();
    // deletefromend();
    // display();
    deletefrombegin();
    display();
    return 0;
}
