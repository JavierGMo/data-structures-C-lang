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
    addFirst(900, &list);
    //removeLastElement(&list);
    //removeFirstElement(&list);
    addByIndex(1, 100, &list);
    printf("\nLen list %d\n", list->length);
    printList(&list);
    removeByIndex(&list, 1);
    //removeLastElement(&list);
    printf("\n\n");
    printf("\nLen list %d\n", list->length);
    //printf("Len list %d", list->length);
    printList(&list);
    printf("\nLen list %d\n", list->length);
    return 0;
}
