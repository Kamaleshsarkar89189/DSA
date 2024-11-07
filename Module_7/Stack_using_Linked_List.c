#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *next;
} *top = NULL; // Initialize top to NULL at the global level

// Function to display the stack
void display() {
    struct node *q = top;
    if (top == NULL) {
        printf("The stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    while (q != NULL) {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("\n");
}

// Function to push an element onto the stack
void push() {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node)); // Correct struct allocation
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter a value to push into the stack: ");
    scanf("%d", &temp->data); // Fixed the scanf syntax
    temp->next = top;
    top = temp;
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack underflow! No elements to pop.\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    printf("Popped element: %d\n", temp->data);
    free(temp);
}

// Main function to provide menu options
int main() {
    int ch;
    while (1) {
        printf("Press 1: To Push\n");
        printf("Press 2: To Pop\n");
        printf("Press 3: To Display\n");
        printf("Press 4: To Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
