#include<stdio.h>
#include<stdlib.h>
void display();
void push();
void pop();
struct node
{
int data;
struct node *next;
} *top;
int main()
{
int ch,i;
top=NULL;
while(1)
{
	printf("\n press 1:To push:");
	printf("\n press 2:To pop:");
	printf("\n press 3:To display:");
	printf("\n press 4:To exit:");
	printf("\n enter your choice:");
	scanf("%d",&ch);
switch(ch)
{
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
		printf("\n wrong choice:");
		}
		   }
		       }
void push()
	{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node)) ;
	printf("\n enter a value:");
	scanf("\n %d",&temp->data);
	temp->next=top;
	top=temp;
	}
void pop()
	{
		struct node *temp;
		temp=top;
		top=top->next;
		free(temp);
		return;
	}
void display()
	{
	struct node *q;
	if(top==NULL)
	{
	printf("\n the list is empty");
	return;
	}
	printf("\n the list is:   \n");
	q=top;
	while(q!=NULL)
	{
	printf("\n %d" ,q->data);
	q=q->next;
	}
	}