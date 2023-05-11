#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

// Linked List Node
struct node {
    int data;
    struct node* next;
}*head=NULL,*p,*t,*nn;
 
// Function to create list with n nodes initially
void create()
{
	int i,n,ele;
	printf("\nenter the no of list : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the element : ");
		scanf("%d",&ele);
		nn = (struct node *)malloc(sizeof(struct node));
		nn->data = ele;
		nn->next = NULL;
		if(head==NULL)
		{
			head = nn;
			p = nn;
		}
		else
		{
			for(p = head;p->next!=NULL;p = p->next);
			p->next = nn;
			p = nn;
		}
	}
}




void display()
{
	if(head==NULL)
	{
		printf("L.L is empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next)
		{
			printf("%d--->",p->data);
		}
	}
}



void input_beg()
{
	int now;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &now);
	temp->data = now;
	temp->next = head;
	head = temp;
}

void insertAtEnd()
{
	int now;
	struct node *temp, *tail;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to be inserted : ");
	scanf("%d", &now);
	temp->next = 0;
	temp->data = now;
	tail = head;
	while (tail->next != NULL) 
	{
		tail = tail->next;
	}
	tail->next = temp;
}

void insertAtPosition()
{
	struct node *temp, *nn;
	int pos, inp, i = 1;
	nn = malloc(sizeof(struct node));
	printf("\nEnter position : ");
	scanf("%d", &pos);
	printf("\nEnter data     : ");
	scanf("%d", &inp);
	temp = head;
	nn->data = inp;
	nn->next = 0;
	while (i < pos - 1) 
	{
		temp = temp->next;
		i++;
	}
	nn->next = temp->next;
	temp->next = nn;
}



int main()
{
	int choice;
	do{

		printf("\n\t1 to create\n");
		printf("\t2 to display\n");
		printf("\t3 to input at begining\n");
		printf("\t4 to input at end\n");
		printf("\t5 to insert at Position\n");
		printf("\t6 to exit\n");
		printf("\nEnter Choice : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			input_beg();
			break;
		case 4:
			insertAtEnd();
			break;
		case 5:
			insertAtPosition();
			break;
		case 6:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}while(choice>=1 &&choice<=6);
	return 0;
}