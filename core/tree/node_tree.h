typedef struct node{
    int value;
    struct node* left;
    struct node* ritgth;
} Node;


int isEmpty(Node* tree){
    return (tree == NULL);
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

void inOrderSearch(Node* tree){
    if(isEmpty(tree)){
        printf("\nEnd of tree\n");
        return;
    }

    inOrderSearch(tree->left);
    printf("Node value: %d", tree->value);
    inOrderSearch(tree->ritgth);
}