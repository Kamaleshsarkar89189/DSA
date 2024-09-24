#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void add_beg();
void add_after();
/*void del();
void rev();
void print_rev();*/

struct node
{
	int data;
	struct node *next;
}*start;

int main()
{
	int ch,i,n;
	start=NULL;
	while(1)
	{
		printf("\n Press 1: to Create the Linked List ");	
		printf("\n Press 2: to Display the Linked List ");
		printf("\n Press 3: to Insert at beginning ");
		printf("\n Press 4: to Insert after ");
		printf("\n Press 5: to Delete a node ");
		printf("\n Press 6: to Reverse the Linked List ");
		printf("\n Press 7: to Print items Reversely ");
		printf("\n Press 8: to Exit ");
		printf("\n Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter the length of the list : ");
				scanf("%d",&n);
				for(i=0;i<n;i++)
					create();
				break;
			case 2:
				display();
				break;
			case 3:
				add_beg();
				break;
			case 4:
				add_after();
				break;
			/*case 5:
				del();	
				break;
			case 6:
				rev();	
				break;
			case 7:
				print_rev();	
				break;*/
			case 8:
				exit(0);
			default:
				printf("\n Wrong Choice..\n\n");
		}
	}	
	return 0;
}

void create()
{
	struct node *temp, *q;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter an item : ");
	scanf("%d",&temp->data);
	//temp->next=NULL;
	if(start==NULL)
	{
		temp->next=start;
		start=temp;
		return;
	}
	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	temp->next=q->next;
	q->next=temp;
}

void display()
{
	struct node *q;
	if(start==NULL)
	{
		printf("\n The Single Linked is Empty..\n\n");
		return;
	}
	q=start;
	printf("\n START =>>");
	while(q->next!=NULL)
	{
		printf(" %d =>>",q->data);
		q=q->next;
	}
	printf(" %d =>> LAST\n\n",q->data);
}

void add_beg()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter an item : ");
	scanf("%d",&temp->data);
	temp->next=start;
	start=temp;
}

void add_after()
{
	int i,pos;
	struct node *temp,*q;
	printf("\n Enter the position after which you want to insert : ");
	scanf("%d",&pos);
	q=start;
	for(i=0;i<pos-1;i++)
	{
		if(q->next==NULL)
		{
			printf("\n Invalid Position ..\n\n");
			return;
		}
		q=q->next;
	}
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter an item : ");
	scanf("%d",&temp->data);
	temp->next=q->next;
	q->next=temp;
}