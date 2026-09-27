#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL; 
void insertfrombegin(int val){
    struct node *newnode=malloc(sizeof(struct node));

    newnode->data=val;
    newnode->next=head;
    newnode->prev=NULL;

    if (head!=NULL)
    {
        head->prev=newnode;
    }

    head=newnode;
}
void inserttoend(int val){
    struct node *newnode=malloc(sizeof(struct node));

    newnode->data=val;
    newnode->next=NULL;

    if (head==NULL)
    {
        head=newnode;
        newnode->prev=NULL;
        return;
    }

    struct node *temp =head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }
    
    newnode->prev=temp;
    temp->next=newnode;

}
void deletefrombegin()
{
    struct node * temp=head;
    if(head==NULL)
    {
        printf("Linked list is empty ");
        return;
    }

    head=temp->next;
    head->prev=NULL;
    free(temp);
    printf("value removed");

}
void deletefromend()
{
    
    if(head==NULL)
    {
        printf("Linked list is empty ");
        return;
    }
    struct node *temp=head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }

    temp->prev->next=NULL;
    free(temp);
    printf("value removed ");


}
void display()
{
    printf("\n");
    if(head==NULL)
    {
        printf("The list is empty ");
    }
    struct node *temp=head;

    while (temp!=NULL)
    {
        printf(" %d->",temp->data);
        temp=temp->next;
    }
    
}
int main()
{

    inserttoend(10);
    inserttoend(20);
    inserttoend(30);
    inserttoend(40);
    display();
    
    // insertfrombegin(10);
    // insertfrombegin(20);
    // insertfrombegin(30);
    insertfrombegin(40);
    display();
    deletefrombegin();
    
    deletefromend();
    
    display();
    return 0;

}
