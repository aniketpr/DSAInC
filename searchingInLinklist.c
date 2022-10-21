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

    int position = 1;
    while(head!=NULL){
        if(head->data == 3){
            printf("Data: %d\n",head->data);
            break; 
        }
        position++;
        head = head->next;
    }

    printf("Position: %d\n", position);

    return 0;
}