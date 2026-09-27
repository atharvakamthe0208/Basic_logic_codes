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
        printf("\nLinked list is empty ");
        return;
    }

    head=temp->next;
    head->prev=NULL;
    free(temp);
    printf("\nvalue removed ");

}
void deletefromend()
{
    struct node *temp=head;
     if(head==NULL)
    {
        printf("\nLinked list is empty ");
        return;
    }       
    if(head->next==NULL)
    {
        head=NULL;
        free(temp);
        return ;
    }
    
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }

    temp->prev->next=NULL;
    free(temp);
    printf("\nvalue removed ");


}
void display()
{
    printf("\n");
    if(head==NULL)
    {
        printf("\nThe list is empty ");
    }
    struct node *temp=head;

    while (temp!=NULL)
    {
        printf(" %d->",temp->data);
        temp=temp->next;
    }
    
}
void search(int val)
{
    struct node *temp=head;
    int cnt=0;
    while (temp!=NULL)
    {
        cnt++;
        if(temp->data==val)
        {
            printf("\ndata found at index %d",cnt);
            return;
        }
        temp=temp->next;
    }
    printf("\ndata not found"); 
    
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
    search(266);
    deletefrombegin();
    search(10);
    display();
    return 0;

}
