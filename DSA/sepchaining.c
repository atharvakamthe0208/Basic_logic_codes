#include <stdio.h>
#include <stdlib.h>
#define size 10

struct Node{
    int key;
    struct Node *next;
};
struct Node *table[size]={NULL};

int hashFunction(int key){
    return key%size;
}

void insert(int val){
    int index = hashFunction(val);
    
    struct Node *current=table[index];
    
    while(current!=NULL){
        if(current->key==val){
            printf("key already exists\n");
            return;
        }
        current=current->next;
    }
    
    struct Node *newnode=malloc(sizeof(struct Node));
    newnode->key=val;
    newnode->next=table[index];
    table[index]=newnode;
    printf("key inserted at position %d\n",index);
}

void display(){
    for(int i=0; i<size; i++){
        struct Node *current = table[i];
        printf("Index %d: ", i);
        while(current!=NULL){
            printf("%d -> ", current->key);
            current=current->next;
        }
        printf("NULL\n");
    }
}


int search(int val)
{
    // 1. Find the bucket index using the hash function
    int index = hashFunction(val);
    
    // 2. Traverse the linked list at that index
    struct Node *current = table[index];
    while(current != NULL) {
        if(current->key == val) {
            return index; // Key found, return its bucket index
        }
        current = current->next;
    }
    
    return -1; // Key not found
}
void update(int oldval,int newval)
{
    int index1=hashFunction(oldval);
    int index2=hashFunction(newval);

    if(index1!=index2)
    {
        printf("Update is not possible at particular pos \n");
        return;
    }

    struct Node *current=table[index1];

    while (current!=NULL)
    {
        if(current->key==oldval)
        {
            current->key=newval;
            printf("Value Updated\n");
            return;
        }

        current=current->next;
        
    }
    
}

void delete(int data)
{
    int index=hashFunction(data);

    struct Node *current=table[index];
    struct Node *prev=NULL;

    if(current==NULL)
    {
        printf("Postion is empty");
        return;
    }

    
    while (current!=NULL)
    {
       
        if(current->key==data)
        {
            if(prev==NULL)
            {
                table[index]=current->next;
            }else
            {
                prev->next=current->next;
                
            }
            
            free(current);
            printf("%d key deleted \n",data);
            return;
        
        }
        current=current->next;
    }

}

int main()
{
    insert(23);
    insert(43);
    insert(73);

    insert(55);
    display();
    printf("-------Hash Table-----\n");

    // update(43,53);
    // display();
    printf("-------------------------");
    printf("-------hash table---------");
    delete(73);
    delete(43);
    display();
}

// int main()
// {
//     insert(23);
//     insert(43);
//     insert(73);
//     insert(45);
//     printf("\n--- Hash Table State ---\n");
//     display();
    
    
//     int target=43;
//     int res = search(target);
    
//     if(res == -1)
//     {
//         printf("Key %d not found in the hash table.\n", target);
//     } else {
//         printf("Key %d found at index %d.\n", target, res);
//     }
    
//     return 0;
// }
