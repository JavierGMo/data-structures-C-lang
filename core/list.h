#include "node.h"

int isEmpty(Node* list){
    int empty = list == NULL;
    return empty;
}

void init(int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;
    if(isEmpty(*list)) intialization->next = NULL;
    if(!isEmpty(*list)) intialization->next = *list;
    *list = intialization;

}

void addLast(int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;    
    if(isEmpty(*list)){
        intialization->next = NULL;
        *list = intialization;
        return;
    }

    Node* aux = *list;
    while ((*list)->next != NULL) *list = (*list)->next;

    (*list)->next = intialization;

    *list = aux;


}

void addFirst(int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;
    
    if(isEmpty(*list)) intialization->next = NULL;
    if(!isEmpty(*list)) intialization->next = *list;

    *list = intialization;
}

void removeFirstElement(Node** list){
    if(isEmpty(*list)) return;
    Node* aux = *list;
    *list = (*list)->next;
    free(aux);
}

void removeLastElement(Node** list) {
    if(isEmpty(*list)) return;
    Node* aux = *list;
    while (((*list)->next)->next != NULL) *list = (*list)->next;
    
    Node* lastElement = (*list)->next;
    (*list)->next = NULL;
    free(lastElement);
    *list = aux;
    
}

void printList(Node** list){
    Node* aux = *list;
    while (aux != NULL){
        printf("List value: %d\n", aux->value);
        aux = aux->next;
    }
    
    
}
