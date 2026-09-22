#include <stdio.h>
#include <stdlib.h>
struct  node
{
    int data;
    struct node *add;
};

struct node *head = NULL;

void insertfrombegin(int val)
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
void inserttoend(int val)
{
    struct  node *newnode=malloc(sizeof(struct node));

    newnode->data=val;
    newnode->add=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct  node *temp=head;
        while (temp->add!=NULL)
        {
            temp=temp->add;
        }

        temp->add=newnode;
        
    }
    
    
}
void search(int val)
{
    struct node *temp=head;
    while (temp!=NULL)//a100!=null
    {
        if(temp->data==val)
        {
            printf("\ndata found");
            return;
        }
        temp=temp->add;
            
    }
    printf("\ndata not found"); 
        //temp->add=newnode;
}
void deletefromend(int val)
{

}
int main()
{
    int ch, data;
    printf("=================Single Linked List Operations=================");
    printf("\n1.InsertFromBegin ");
    printf("\n2.InserttoEnd ");
    printf("\n3.DeleteFromBegin ");
    printf("\n4.DeletefromEnd ");
    printf("\n5.Search ");
    printf("\n6.Display ");
    printf("\n7.Exit ");
    do
    {
        printf("Enter your choice :");
        scanf("%d",&ch);
       switch (ch)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertfrombegin(data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                inserttoend(data);
                break;

            case 3:
                deletefrombegin();
                break;

            case 4:
                //deletefromend();
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &data);
                search(data);
                break;

            case 6:
                display();
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (ch != 7);



    
    return 0;
}

//inserttoend(10);
    //inserttoend(20);
    //inserttoend(30);
    //inserttoend(40);
    //display();
    //search(30);
    //search(44);
    
    //insertfrombegin(10);
    //insertfrombegin(20);
    //insertfrombegin(30);
    //insertfrombegin(40);
    //deletefrombegin();
    //printf("\n"); 
    //display();