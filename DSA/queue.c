#include <stdio.h>
#define max 5

int queue[max];
int front = -1, rear = -1;

void enqueue(int val)
{
    if (rear == max - 1)
    {
        printf("Queue is full\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    queue[++rear] = val;
}

int isempty()
{
    return (front == -1 && rear == -1);
}

void dequeue()
{
    if (isempty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Element removed: %d\n", queue[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
void peek()
{
    if(isempty())
    {
        printf("Queue is empty\n");
        return;

    }

    printf("Peek element is %d",queue[front]);

}
void display()
{
    if (isempty())
    {
        printf("Queue is empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        printf("%d -> ", queue[i]);
    }

    printf("NULL\n");
}

void getrear()
{
    if(isempty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("\nRear Element : %d",queue[rear]);
    
}
void search(int val)
{
    if(isempty())
    {
        printf("Queue is empty\n");
        return;
    }
    int v=val;
    for (int i = front; i <= rear; i++)
    {
        if(queue[i]==v)
        {
           printf("\n%d Element Found at index %d", queue[i], i);
        }
    }
}
void size()
{
    if(isempty())
    {
        printf("Queue is empty\n");
        return;
    }

    if(front==-1)
    {
        printf("\nSize of Queue is %d",rear+1);

    }else
    {
        printf("\nSize of Queue is %d",rear-front+1);
    }

}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    // dequeue();
    // display();

    // dequeue();
    // display();

    // dequeue();
    // display();

    peek();
    getrear();
    search(30);
    size();
    dequeue();
    dequeue();
    dequeue();
    size();
    
    return 0;
}