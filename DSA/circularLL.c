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
int main()
{
    inserttoend(10);
    inserttoend(20);
    inserttoend(30);
    inserttoend(40);
    display();
    deletefromend();
    display();
    deletefromend();
    display();
    deletefromend();
    display();
    deletefromend();
    display();
    deletefromend();
    display();

    return 0;
}
