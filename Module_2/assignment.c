#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define Max 100

typedef struct {
    int arr[Max];
    int top;
}Stack;

void initStack(Stack* s){
    s->top = -1;
}
int isFull(Stack* s){
    return s->top == Max - 1;
}
int isEmpty(Stack* s){
    return s->top == -1;
}
void push(Stack* s, int value){
    if(isFull(s)){
        printf("Stack overflow\n");
        return;
    }
    s->arr[++(s->top)] = value;
}
int pop(Stack* s){
    if(isEmpty(s)){
        printf("Stack underflow\n");
        return INT_MIN;
    }
    return s->arr[(s->top)--];
}
int peek(Stack* s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return s->arr[s->top];
}
void display(Stack* s){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: \n");
    for(int i=0; i<=s->top; i++){
        printf("%d", s->arr[i]);
    }
    printf("\n");
}
int main(){
    Stack s;
    initStack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    display(&s);
    printf("Top element is %d\n", peek(&s));
    printf("Popped element is %d\n", pop(&s));
    display(&s);
    return 0;
}