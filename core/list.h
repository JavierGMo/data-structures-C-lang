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
        (*list)->length++;
        return;
    }

    Node* aux = *list;
    while ((*list)->next != NULL) *list = (*list)->next;

    (*list)->next = intialization;

    *list = aux;

    (*list)->length++;


}

void addFirst(int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;
    (*list)->length++;
    if(isEmpty(*list)) intialization->next = NULL;
    if(!isEmpty(*list)) intialization->next = *list;
    *list = intialization;
}

void addByIndex(int index, int value, Node** list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;
    int i = 0;
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
    (*list)->length++;
    printf("\nIdx:[%d] value->%d\n", i, nodeByIndex->value);
    

}

void removeFirstElement(Node** list){
    if(isEmpty(*list)) return;
    (*list)->length--;
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
    (*list)->length--;
    
}

void removeByIndex(Node **list, int index){
    if(isEmpty(*list)) return;
    Node* foundNode = *list;
    Node* aux  = *list;
    int const n = index - 1;
    for (int i = 0; i < n; i++) foundNode = foundNode->next;
    Node* gotNode = foundNode->next;
    if(gotNode->next == NULL) {
        printf("\n-------->LAST VALUE<------------- V: %d \n ", foundNode->value);
        foundNode->next = NULL;
        free(gotNode);
        *list = foundNode;
        (*list)->length--;
        return;
    }

    foundNode->next = gotNode->next;

    *list = foundNode;
    (*list)->length--;
    

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
