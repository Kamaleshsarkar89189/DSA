#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 6
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;
int peek(){
   return intArray[front];
}
bool isEmpty(){
   return itemCount == 0;
}
bool isFull(){
   return itemCount == MAX;
}
int size(){
   return itemCount;
}
void insert(int data){
   if(!isFull()) {
      if(rear == MAX-1) {
         rear = -1;
      }
      intArray[++rear] = data;
      itemCount++;
   }
}
int removeData(){
   int data = intArray[front++];
   if(front == MAX) {
      front = 0;
   }
   itemCount--;
   return data;
}
int main(){
   
   /* insert 5 items */
   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);
   insert(15);
   printf("Queue size: %d", size());
   printf("\nQueue: ");
   for(int i = 0; i < MAX; i++){
       printf("%d ", intArray[i]);
   }
   if(isFull()) {
      printf("\nQueue is full!");
   }

   // remove one item
   int num = removeData();
   printf("\nElement removed: %d", num);
   printf("\nSize of Queue after deletion: %d", size());
   printf("\nElement at front: %d", peek());
}

// For more information go to this link https://www.tutorialspoint.com/data_structures_algorithms/queue_program_in_c.htm