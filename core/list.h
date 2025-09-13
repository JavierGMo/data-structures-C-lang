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
    (*list)->length = 1;

}

void addLast(int value, Node** list){
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

void addFirst(int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;
    int length = 0;
    if(isEmpty(*list)) intialization->next = NULL;
    if(!isEmpty(*list)) {
        intialization->next = *list;
        length = (*list)->length + 1;
    }
    *list = intialization;
    (*list)->length = length;
}

void addByIndex(int index, int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;
    int i = 0;
    int length = (*list)->length;
    Node* aux = *list;
    while (aux!=NULL){
        i++;
        if(i==index) break;
        aux = aux->next;
    }
    Node *nodeByIndex = aux->next;
    aux->next = intialization;
    intialization->next = nodeByIndex;
    *list = aux;
    (*list)->length = length+1;
    printf("\nIdx:[%d] value->%d\n", i, nodeByIndex->value);
    

}

void removeFirstElement(Node** list){
    if(isEmpty(*list)) return;
    int length = (*list)->length;
    Node* aux = *list;
    *list = (*list)->next;
    (*list)->length = length-1;
    free(aux);
}

void removeLastElement(Node** list) {
    if(isEmpty(*list)) return;
    int length = (*list)->length;
    Node* aux = *list;
    while (((*list)->next)->next != NULL) *list = (*list)->next;
    
    Node* lastElement = (*list)->next;
    (*list)->next = NULL;
    free(lastElement);
    *list = aux;
    (*list)->length = length-1;
    
}

void removeByIndex(Node **list, int index){
    if(isEmpty(*list)) return;
    int length = (*list)->length;
    Node* aux = *list;
    Node* foundNode  = *list;
    if(index == 0){
        removeFirstElement(&(*list));
        return;
    }
    if(index == length-1) {
        removeLastElement(&(*list));
        return;
    }
    int const n = index - 1;
    for (int i = 0; i <= n; i++) {
        if(aux->next->next == NULL){
            foundNode = aux->next;
            aux->next = NULL;
            break;
        }
        if(i==n){
            foundNode = aux->next;
            aux->next = aux->next->next;
            foundNode->next = NULL;
            break;
        }
        aux = aux->next;
    }
    *list = aux;
    (*list)->length = length-1;
    free(foundNode);
}

void printList(Node** list){
    Node* aux = *list;
    int i = 0;
    while (aux != NULL){
        printf("Index: [%d] -> List value: %d\n", i, aux->value);
        aux = aux->next;
        i++;
    }
    
    
}
