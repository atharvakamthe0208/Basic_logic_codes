#include <stdio.h>
#define size 10

int table[size];
int hashfunction(int key){
    return key%size;
}
void insert(int val)
{
    int index=hashfunction(val);

    for(int i=0;i<size;i++)
    {
        int pos=(index+i)%size;

        if(table[pos]==-1)
        {
            table[pos]=val;
            printf("%d inserted at postion :%d\n",val,pos);
            return;
        }

        if(table[pos]==val)
        {
            printf("Key already exisist");
            return;
        }
    }
    printf("Hash table is full");

}

void display()
{
    for(int i=0;i<size;i++)
    {
        if(table[i]==-1)
        {
            printf("0\t");

        }else{
            printf("%d\t",table[i]);
        }

    }

}
void search(int val)
{
    int index=hashfunction(val);//3

    
    for(int i=0;i<size;i++)
    {
        int pos=(index+i)%size;

        if(table[pos]==val)
        {
            printf("\nElement found at index %d",pos);
            return;
        }
    }
    printf("\n Element not found");
}
int main()
{
    for(int i=0;i<size;i++)
    {
        table[i]=-1;
    }
    insert(23);
    insert(43);
    insert(57);
    insert(78);
    display();
    search(23);
    search(43);
    search(57);
    search(344);
    return 0;
}