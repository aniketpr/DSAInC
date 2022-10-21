#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

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

    int count = 0;
    while(head!=NULL){
        count++;
        printf("%d\n",head->data); 
        head = head->next;
    }

    printf("%d",count); //conting number of nodes
    return 0;
}