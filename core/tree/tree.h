#include "node_tree.h"



int isEmpty(Node* tree){
    return (tree == NULL);
}

/*void createEmptyNode(Node **tree, int value){
    *tree = (Node*)malloc(sizeof(Node));
    (*tree)->value = value;
}*/

Node* createEmptyNode(int value){
    Node *node = (Node*)malloc(sizeof(Node));
    node->left = NULL;
    node->ritgth = NULL;
    node->value = value;
    return node;
}

void preOrderTraversalSearch(Node* tree){
    if(isEmpty(tree)){
        printf("\nEnd of tree\n");
        return;
    }
    printf("\nValue patern: %d\n", tree->value);
    if(!isEmpty(tree->left)){
        printf("\nValue Node left: %d\n", tree->left->value);
        preOrderTraversalSearch(tree->left);
    }
    if(!isEmpty(tree->ritgth)){
        printf("\nValue Node rigth: %d\n", tree->ritgth->value);
        preOrderTraversalSearch(tree->ritgth);
    }

    return;

}

void printTree(Node *tree){
    if(isEmpty(tree)){
        printf("-");
        return;
    }
    printTree(tree->left);
    printf("\nValue: %d", tree->value);
    printTree(tree->ritgth);

}

void inOrderSearch(Node* tree){
    if(isEmpty(tree)){
        printf("\nEnd of tree\n");
        return;
    }

    inOrderSearch(tree->left);
    printf("Node value: %d", tree->value);
    inOrderSearch(tree->ritgth);
}

void postOrderSearch(Node *tree){
    if(isEmpty(tree)){
        printf("\nEnd of tree\n");
        return;
    }
    postOrderSearch(tree->left);
    postOrderSearch(tree->ritgth);
    printf("\nValue rigth: %d\n", tree->value);
}

void search(Node *tree, int toSearch){
    if(isEmpty(tree)){ return; }
    printf("\nvalue %d\n", tree->value);
    if(tree->value == toSearch) {
        printf("\nParent %d\n", tree->value);
        return;
    }
    if(tree->value < toSearch){
        search(tree->ritgth, toSearch);
        return;
    }
    search(tree->left, toSearch);
}

void inserByArray(Node **tree, int *values, int* countValues, int lenValues){
    if(isEmpty(*tree) && countValues == 0){
        (*tree)->value = (*values)[countValues];
        (*tree)->left = NULL;
        (*tree)->ritgth = NULL;
        return;
    }

    Node * newNode = createEmptyNode((*values)[countValues]);
    if((*tree)->value > (*values)[countValues]){

        (*tree)->left = newNode;
        return;
    }

    if((*tree)->value < (*values)[countValues]){

        (*tree)->ritgth = newNode;
        return;
    }



}

