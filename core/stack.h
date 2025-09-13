#include "node.h"


int isEmpty(Node* stack){
    int empty = stack == NULL;
    return empty;
}


void add(int value, Node** stack){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;    
    
    if(isEmpty(*stack)){
        printf("\n\nfirst elemto to be added\n\n");
        intialization->next = NULL;
        *stack = intialization;
        (*stack)->length = 1;
        return;
    }
    int length = (*stack)->length;
    Node* aux = *stack;
    while ((*stack)->next != NULL) *stack = (*stack)->next;

    (*stack)->next = intialization;

    *stack = aux;

    (*stack)->length = length+1;

}

void pop(Node** stack) {
    if(isEmpty(*stack)) {
        printf("--- EMPTY STACK ---");
        return;
    }
    int length = (*stack)->length;
    Node* aux = *stack;
    if((*stack)->next == NULL) {
        *stack = NULL;
        free(aux);
        return;
    }
    while (((*stack)->next)->next != NULL) *stack = (*stack)->next;
    
    Node* lastElement = (*stack)->next;
    (*stack)->next = NULL;
    free(lastElement);
    *stack = aux;
    (*stack)->length = length-1;
    
}

void printStack(Node** stack){
    if(isEmpty(*stack)){
        printf("\n\n--- EMPTY STACK ---\n\n");
        return;
    }
    Node* aux = *stack;
    int i = 0;
    while (aux != NULL){
        printf("Index: [%d] -> stack value: %d\n", i, aux->value);
        aux = aux->next;
        i++;
    }
    
    
}