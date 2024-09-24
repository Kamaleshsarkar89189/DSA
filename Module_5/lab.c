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
    struct node *next;
};
struct node *head=NULL,*temp,*newnode,*prev,*ptr;
void main(){
    int choice;
    do{
        printf("\n....linkedlist operation....");
        printf("\n 1=create");
        printf("\n 2=insert first");
        printf("\n 3=insert end");
        printf("\n 4=insert middle");
        printf("\n 5=delete first");
        printf("\n 6=delete end");
        printf("\n 7=delete middle");
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
                          display();
                          break;
            case 9:
              display();
              break;
            case 10:
            printf("\nenter the valid operation: ");    
        }
    }while(choice!=10);

}
void create(){
    head=(struct node*)malloc(sizeof(struct node));
    int n,ch;
    printf("enter the value: ");
    scanf("%d",&n);
    head->data=n;
    head->next=NULL;
    temp=head;
    printf("do you want continue : 1=yes or 0=no: ");
    scanf("%d",&ch);
    while (ch==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the next value: ");
        scanf("%d",&n);
        newnode->data=n;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
        printf("do you wany continue: 1=yes or 0=no: ");
        scanf("%d",&ch);
    }

}
void insert_first(){
    int n;
    printf("enter the insert_first element : ");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
}
void insert_end(){
    int n;
    printf("enter the insert_end element : ");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void insert_middle(){
    int n,position,i=1;
    printf("enter the insert_middle element : ");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    printf("enter the position: ");
    scanf("%d",&position);
    temp=head;
 while(i<position){
     prev=temp;
     temp=prev->next;
     i++;
 }
   prev->next=newnode;
   newnode->next=temp;

}
void delete_first(){
    temp=head;
    printf("delete_first element is %d\n",temp->data);
    head=temp->next;
    free(temp);
}
void delete_end(){
    temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    printf("delete_end element is %d\n",temp->data);
    prev->next=NULL;
    free(temp);
}
void delete_middle(){
    int position,i=1;
    printf("enter the position: ");
    scanf("%d",&position);
    temp=head;
 while(i<position){
     prev=temp;
     temp=prev->next;
     i++;
 }
   printf("delete_middle element is %d\n",temp->data);
   prev->next=temp->next;
   free(temp);
}
void reverse(){
        prev=NULL;
        temp=ptr=head;
        while(temp!=NULL){
                temp=temp->next;
                ptr->next=prev;
                prev=ptr;
                ptr=temp;
        }
        head=prev;
}
void display(){
    temp=head;
    if(temp==NULL){
        printf("no list found");
    }else{
        printf("value are: ");
        while(temp!=NULL){
            printf(" %d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
 }
}