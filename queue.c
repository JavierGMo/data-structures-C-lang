#include <stdio.h>
#include <stdlib.h>
#include "core/queue.h"

int main(int argc, char const *argv[])
{
    Node* queue = NULL;
    add(1, &queue);
    add(100, &queue);
    add(200, &queue);
    add(7888, &queue);
    pop(&queue);
    printQueue(&queue);
    return 0;
}
