#include <stdio.h>
#include <stdlib.h>
#include "core/tree/tree.h"

int main(int argc, char const *argv[])
{
    Node *root = (Node*)malloc(sizeof(Node));
    root->value = 13;
    Node *left = (Node*)malloc(sizeof(Node));
    Node *rigth = (Node*)malloc(sizeof(Node));
    left->value = 7;
    rigth->value = 15;


    Node *leftLeftChild = (Node*)malloc(sizeof(Node));
    Node *leftRigthChild = (Node*)malloc(sizeof(Node));
    leftLeftChild->value = 3;
    leftRigthChild->value = 8;

    left->left = leftLeftChild;
    left->ritgth = leftRigthChild;

    root->left = left;

    Node *rigthRigthChild = (Node*)malloc(sizeof(Node));
    Node *rigthRigthLeftChild = (Node*)malloc(sizeof(Node));
    rigthRigthChild->value = 19;
    rigthRigthLeftChild->value = 18;
    rigthRigthChild->left = rigthRigthLeftChild;
    rigth->ritgth = rigthRigthChild;

    root->ritgth = rigth;
    //preOrderTraversalSearch(root);
    //inOrderSearch(root);
    //postOrderSearch(root);
    printTree(root);
    search(root, 3);
    printf("\nRoot value: %d. Left node: %d | Rigth Node %d\n", root->value, root->left->value, root->ritgth->value);

    return 0;
}
