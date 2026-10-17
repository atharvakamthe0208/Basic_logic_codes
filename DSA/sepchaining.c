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

// —— IMPLEMENTED SEARCH FUNCTION ——
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

int main()
{
    insert(23);
    insert(43);
    insert(73);
    insert(45);
    printf("\n--- Hash Table State ---\n");
    display();
    printf("\n--- Search Test ---\n");
    
    int target = 43;
    int res = search(target);
    
    if(res == -1)
    {
        printf("Key %d not found in the hash table.\n", target);
    } else {
        printf("Key %d found at index %d.\n", target, res);
    }
    
    return 0;
}
