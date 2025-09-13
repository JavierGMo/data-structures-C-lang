#include <stdio.h>
#include <stdlib.h>
#include "core/stack.h"

int main(int argc, char const *argv[])
{
    Node* stack = NULL;
    add(1, &stack);
    add(23121, &stack);
    add(1222, &stack);
    add(1312, &stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    printStack(&stack);
    add(1312, &stack);
    add(1312, &stack);
    add(1312, &stack);
    add(1312, &stack);
    printStack(&stack);
    /* code */
    return 0;
}
