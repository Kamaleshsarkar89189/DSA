#include<stdio.h>
#include<stdlib.h>
void create();
void insert_first();
void insert_end();
void insert_middle();
void delete_first();
void delete_end();
void delete_middle();
void reverse();
void display();
struct node{
    int data;
    struct node *next,*prev;
};
struct node *head=NULL,*newnode,*temp,*last;
void main(){
    int choice;
    do{
        printf("\n....doubly linkedlist operation....");
        printf("\n 1=create");
        printf("\n 2=insert_first");
        printf("\n 3=insert_end");
        printf("\n 4=insert_middle");
        printf("\n 5=delete_first");
        printf("\n 6=delete_end");
        printf("\n 7=delete_middle");
        printf("\n 8=reverse");
        printf("\n 9=display");
        printf("\nenter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
              create();
              display();
              break;
            case 2:
              insert_first();
              display();
              break;
            case 3:
              insert_end();
              display();
              break;
            case 4:
              insert_middle();
              display();
              break;
            case 5:
              delete_first();
              display();
              break;
            case 6:
              delete_end();
              display();
              break;
            case 7:
              delete_middle();
              display();
              break;
            case 8:
              reverse();
              break;
            case 9:
              display();
              break;
            case 10:
            printf("\n the linkedlist is exit here. ");    
        }
    }while(choice!=10);
}
void create(){
    int choice=1;
    while(choice==1){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=temp->next;
        last=temp;   
    }
      printf("do you want to create list :");
      scanf("%d",&choice);
    } 
}
void insert_first(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the insert_first value : ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_end(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the insert_end value : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    last->next=newnode;
    newnode->prev=last;
    last=newnode;
} 
void insert_middle(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the insert_middle value : ");
    scanf("%d",&newnode->data);
    int pos,i=1;
    printf("enter the position : ");
    scanf("%d",&pos);
    temp=head;
    while(i<pos){
       temp=temp->next;
       i++;
    }
    newnode->prev=temp->prev;
    newnode->prev->next=newnode;
    newnode->next=temp;
    temp->prev=newnode;
}
void delete_first(){
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void delete_end(){
    temp=last;
    last=last->prev;
    last->next=NULL;
    free(temp);
}
void delete_middle(){
    int pos,i=1;
    printf("enter the position : ");
    scanf("%d",&pos);
    temp=head;
    while(i<pos){
       temp=temp->next;
       i++;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void reverse(){
    temp=last;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->prev;
    }
}