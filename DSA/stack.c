#include <stdio.h>
#define  max 10
int stack[max];

int top=-1;
//add element into the stack

void push(int val){
    if(top==max-1)
    {
        printf("stack Overflow");
        return;
    }

    stack[++top]=val;
    printf("value Added\n");
}

void pop(){
    if(top==-1)
    {
        printf("Value added");
    }

    printf("removed %d\n",stack[top]);
    top--;
}

void  display()
{
    if(top==-1)
    {
        printf("Stack is empty");
        return;
    }
    printf("\n");
    for(int i=top;i=0;i--)
    {
        printf("%d->",stack[top]);
        top--;
    }

}
void peak()
{
    printf("%d",stack[top]);
}

void main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    display();
    peak();
    
}