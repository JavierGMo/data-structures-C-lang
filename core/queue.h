#include "node.h"

int isEmpty(Node* list){
    int empty = list == NULL;
    return empty;
}

void add(int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;    
    
    if(isEmpty(*list)){
        intialization->next = NULL;
        *list = intialization;
        (*list)->length = 1;
        return;
    }
    int length = (*list)->length;
    Node* aux = *list;
    while ((*list)->next != NULL) *list = (*list)->next;

    (*list)->next = intialization;

    *list = aux;

    (*list)->length = length+1;
}

void pop(Node** list){
    if(isEmpty(*list)) return;
    int length = (*list)->length;
    Node* aux = *list;
    *list = (*list)->next;
    (*list)->length = length-1;
    free(aux);
}

void printQueue(Node** list){
    Node* aux = *list;
    int i = 0;
    while (aux != NULL){
        printf("Index: [%d] -> List value: %d\n", i, aux->value);
        aux = aux->next;
        i++;
    }
    
    
}