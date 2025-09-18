#include <stdio.h>
#include <stdlib.h>
#include "core/tree/tree.h"

int main(int argc, char const *argv[])
{
    Node *root = (Node*)malloc(sizeof(Node));
    root->value = 1;
    Node *left = (Node*)malloc(sizeof(Node));
    Node *rigth = (Node*)malloc(sizeof(Node));
    left->value = 2;
    rigth->value = 10;


    Node *leftLeftChild = (Node*)malloc(sizeof(Node));
    Node *leftRigthChild = (Node*)malloc(sizeof(Node));
    leftLeftChild->value = 3;
    leftRigthChild->value = 5;

    left->left = leftLeftChild;
    left->ritgth = leftRigthChild;

    root->left = left;

    Node *rigthRigthChild = (Node*)malloc(sizeof(Node));
    Node *rigthRigthLeftChild = (Node*)malloc(sizeof(Node));
    rigthRigthChild->value = 2;
    rigthRigthLeftChild->value = 3;
    rigthRigthChild->left = rigthRigthLeftChild;
    rigth->ritgth = rigthRigthChild;

    root->ritgth = rigth;
    //preOrderTraversalSearch(root);
    inOrderSearch(root);
    printf("\nRoot value: %d. Left node: %d | Rigth Node %d\n", root->value, root->left->value, root->ritgth->value);

    return 0;
}
