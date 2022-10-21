#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

void findingPointerToLastNode(struct node * head){

    while(head->next!=NULL){
        head = head->next;
    }

    printf("Finding pointer to a last node: %d\n", head->data);
}

void findingPointerToSecondLastNode(struct node * head){

    while(head->next->next!=NULL){
        head = head->next;
    }

    printf("Finding pointer to a second last node: %d\n", head->data);
}

void findingPointerToNodeWithParticularValue(struct node * head, int x){

    while(head!=NULL){
        if(head->data == x){
            break;
        }
        head = head->next;
    }

    printf("Finding pointer to a node with particular value: %d\n", head->data);
}

void findingPointerToPredecessorOfNodeWithParticularValue(struct node * head, int x){

    while(head->next!=NULL){
        if(head->next->data == x){
            break;
        }
        head = head->next;
    }

    printf("Finding pointer to predecessor of node with particular value: %d\n", head->data);
}

void findingPointerToNodeAtParticuarPosition(struct node * head, int x){

    for(int i=1; i<x && head!=NULL; i++){
        head = head->next;
    }

    printf("Finding pointer to node at particular position: %d\n", head->data);
}

int main(){
    struct node *head;
    struct node *two;
    struct node *three;
    struct node *four;

    head = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node)); 

    head->data = 2;
    head->next = two;

    two->data = 3;
    two->next = three;

    three->data = 4;
    three->next = four;

    four->data = 5;
    four->next = NULL;

    findingPointerToLastNode(head);
    findingPointerToSecondLastNode(head);
    findingPointerToNodeWithParticularValue(head,4);
    findingPointerToPredecessorOfNodeWithParticularValue(head,4);
    findingPointerToNodeAtParticuarPosition(head, 3);

    return 0;
}