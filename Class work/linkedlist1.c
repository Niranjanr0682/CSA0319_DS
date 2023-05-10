#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

// Linked List Node
struct node {
    int data;
    struct node* next;
}*head=NULL,*p,*t,*newnode;
 
// Function to create list with n nodes initially
void create()
{
    int i,n,ele;
    printf("enter the list count : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {printf("enter the element");
    scanf("%d",&ele);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    newnode->next=NULL;
    if(head ==NULL)
    {head = newnode;
    p=newnode;}
    else
    {for(p=head;p->next!=NULL;p=p->next)
    p->next=newnode;
    p=newnode;}}}


void display()
{
    // List is empty
	if (head == NULL)
		printf("\nList is empty\n");
    // Else print the LL
	else 
    {
	for(p=head;p!=NULL;p=p->next)
        {
			printf("Data = %d\n",p->data);
		}
	}
}

int main()
{
	int choice;
	do{

		printf("\n\t1 to create\n");
		printf("\t2 to display\n");
		printf("\t3 To exit\n");
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
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}while(choice>=1 &&choice<=3);
	return 0;
}
