#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void displayList(struct node * head){
    printf("Display List : ");
    while(head!=NULL){
        printf("%d ",head->data); 
        head = head->next;
    }
    printf("\n");
}

void countNode(struct node *head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }

    printf("The number of nodes : %d\n",count); //conting number of nodes
}

void searchPositionOfElement(struct node *head, int data){
    int position = 1;
    while(head!=NULL){
        if(head->data == data){
            break; 
        }
        position++;
        head = head->next;
    }

    printf("Position: %d\n", position);
}

int main()
{
    struct node *prev,*head,*p;
    int n,i;
    printf ("Enter the number of nodes : ");
    scanf("%d",&n);
    head=NULL;
    for(i=1;i<=n;i++)
    {
        p=malloc(sizeof(struct node));
        printf("Enter the %d element : ", i);
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }

    int choice;
    while(1){
        printf("\n");
        printf("0. Quit \n");
        printf("1. Display List\n");
        printf("2. Count Nodes\n");
        printf("3. Search for position of an element \n\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        if(choice==0)
            break;

        switch (choice)
        {
            case 1:
                displayList(head);
                break;
            case 2:
                countNode(head);
                break;
            case 3:
                int element;
                printf("Enter the element : ");
                scanf("%d", &element);
                searchPositionOfElement(head,element);
                break;
            default:
                printf("Wrong Input!\n");
        }
    }


    return 0;
}