#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 6
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;
bool isEmpty(){
   return itemCount == 0;
}
int main(){
   int i;
   printf("Queue: ");
   for(i = 0; i < MAX; i++)
      printf("%d ", intArray[i]);
   printf("\n");
   if(isEmpty()) {
      printf("Queue is Empty!\n");
   }
}