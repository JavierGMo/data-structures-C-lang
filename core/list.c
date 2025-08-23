#include "node.h"
void init(int value, Node* list){
    Node* intialization = (Node*)malloc(sizeof(Node));
    intialization->value = value;
    intialization->next = NULL;

    list = intialization;

}

void add(int value, Node* list){

}