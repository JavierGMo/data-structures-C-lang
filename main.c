#include <stdio.h>
#include <stdlib.h>
#include "core/list.h"

int main(int argc, char const *argv[])
{
    
    Node* list = NULL;
    init(10, &list);
    addFirst(22, &list);
    addLast(90, &list);
    addLast(91, &list);
    addLast(93, &list);
    //removeLastElement(&list);
    //removeFirstElement(&list);
    addByIndex(1, 100, &list);
    printList(&list);
    //printf("Len list %d", list->length);
    removeByIndex(&list, 2);
    printf("\n\n");
    //printf("Len list %d", list->length);
    printList(&list);
    return 0;
}
