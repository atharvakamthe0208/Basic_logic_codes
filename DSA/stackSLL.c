#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *add;
};

struct node *top=NULL;
void push(int val)
{
    struct node *newnode=malloc(sizeof(struct node));

    newnode->data=val;
    newnode->add=top;

    top=newnode;

}

void pop()
{
    if(top==NULL)
    {
        printf("Stack is Empty ");
        return;
    }

    struct node *temp=top;
    top=top->add;
    free(top);


}

void display()
{
    if(top==NULL)
    {
        printf("Stack is Empty ");
        return;
    }

    struct node *temp=top;

    while(temp!=NULL)
    {
        printf("%d -->",temp->data);
        temp=temp->add;
    }
    printf("\n");

}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
}