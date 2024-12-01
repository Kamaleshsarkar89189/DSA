#include <stdio.h>
#include <stdlib.h>

// Definition of a Node in the BST
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

// Function to create a new Node
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function for Pre-Order Traversal
void preOrderTraversal(struct Node* root) {
    if (root != NULL) {
        // Visit the root node
        printf("%d ", root->key);
        // Traverse the left subtree
        preOrderTraversal(root->left);
        // Traverse the right subtree
        preOrderTraversal(root->right);
    }
}

// Main function
int main() {
    // Constructing a simple BST
    //       4
    //      / \
    //     2   6
    //    / \   \
    //   1   3   7

    struct Node* root = createNode(4);
    root->left = createNode(2);
    root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(3);
    root->right->right = createNode(7);

    printf("Pre-Order Traversal of BST:\n");
    preOrderTraversal(root);

    return 0;
}
