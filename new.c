#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

// * Inserting Nodes
void addAtBeginning(struct Node * head,int val){
    struct Node * newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = head -> next;
    head -> next = newNode;
}

void addAtLocation(struct Node * head,int val, int location){
    struct Node * current = head;
    struct Node * previous = NULL;
    if(location < 1){
        printf("Invalid location");
        return;
    }
    for(register int i = 0 ; i < location ; i++){
        if(i == location-1){
            previous = current;
        }
        current = current -> next;
        if(current == NULL){
            break;
        }
    }

    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = current;
    previous -> next = newNode;

}

void addAtEnd(struct Node * head,int val){
    struct Node * newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = NULL; // * Assigning NULL to next field of newNode
    
    struct Node * ptr = head;
    while (ptr -> next != NULL) {
        ptr = ptr -> next;
    }
    
    ptr -> next = newNode;
}

// * Deleting from the linked list
void deleteAtBeginning(struct Node * head){
    struct Node * ptr = head -> next;
    head -> next = ptr -> next;
    free(ptr);
}

void deleteAtLocation(struct Node * head, int location){
    if(location < 1){
        printf("Invalid Location\n");
        return;
    }
    struct Node * ptr = head;
    struct Node * before;
    for(register int i = 0 ; i < location ; i++){
        before = ptr;
        ptr = ptr -> next;
        if(ptr == NULL){
            printf("Location out of bounds!\n");
            return;
        }
    }
    before -> next = ptr -> next;
    free(ptr);
}

void deleteAtEnd(struct Node * head){
    struct Node * ptr = head;
    struct Node * previous;
    while(ptr -> next != NULL){
        previous = ptr;
        ptr = ptr -> next;
    }
    previous -> next = NULL;
    free(ptr);
}

// * Displaying the linked list
void display(struct Node * head){
    struct Node* current = head;
    printf("Linked List: ");
    current = head -> next; 
    while (current != NULL) {
        printf("{%p}(%d)[%p] -> ", current, current -> data , current -> next);
        current = current -> next;
    }
    printf("NULL\n");
}