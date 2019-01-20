#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node{
    int value;
    struct node * next; //recursive
}node_t;

main(){
    node_t * head = NULL;
    head = malloc(sizeof(node_t));
    if(head == NULL){return 1;}

    head->value = 13;
    head->next = malloc(sizeof(node_t));

    head->next->value = 14;
    head->next->next = NULL;
    printList(head);



    printf("Lets add new item at the end of the list \n");
    int newItem; scanf("%d", &newItem);
    pushEnd(head, newItem);

    printf("Lets add item to the beginning \n");
    int newItemBeg; scanf("%d", &newItemBeg);
    pushBeg(head, newItemBeg);

    pushAt(head, 14, 88);
}



void pushEnd(node_t * head, int item){
    node_t * current = head;
    while(current->next != NULL){ //WHY HERE current->next != NULL IS WORKING
                                    //AND WHY IN printList FUCTION current != NULL IS WORKING
        current = current->next;
    }

    current->next = malloc(sizeof(node_t));
    current->next->value = item;
    current->next->next = NULL;

    printList(head);

}

void pushBeg(node_t * head, int item){
    node_t * newNode;
    newNode = malloc(sizeof(node_t));
    newNode -> value = item;
    newNode -> next = head;
    head = newNode;
    printList(head);
    printf("head->value from pushBeg func: %d \n", head->value);
}

void pushAt(node_t * head, int key, int item){
    printf("head->value from pushAt func: %d \n", head->value);

    /*
    node_t * tempHead = head;
    node_t * newNode;
    newNode = malloc(sizeof(node_t));
    newNode -> value = item;

    while(head->value != key){
        //printf("OK %d \n", head->value);

    }
    */
}









void printList(node_t * head){
    //clr();
    printf("List is \n");
    node_t * current = head;
    while(current != NULL){
        printf("%d \n", current->value);
        current = current->next;
    }
}
void clr()
{
  system("cls");
}













