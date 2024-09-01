#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;

// display the list
void printList() {
   struct node *p = head;
   printf("\n[");
   
   // Start from the beginning
   while (p != NULL) {
      printf(" %d ", p->data);
      p = p->next;
   }
   printf("]");
}

// Insert at the beginning
void insertatbegin(int data) {
   // Create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;

   // Point it to the old first node
   lk->next = head;
   
   // Point head to the new first node
   head = lk;
}

// Insert at the end
void insertatend(int data) {
   // Create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   lk->next = NULL;

   // If the list is empty, make the new node the head
   if (head == NULL) {
      head = lk;
      return;
   }

   struct node *linkedlist = head;

   // Traverse to the last node
   while (linkedlist->next != NULL) {
      linkedlist = linkedlist->next;
   }

   // Point the last node to the new node
   linkedlist->next = lk;
}

int main() {
   insertatbegin(12);
   insertatend(22);
   insertatend(30);
   insertatend(44);
   insertatend(50);

   printf("Linked List: ");
   
   // Print list
   printList();

   return 0;
}
