#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node * next;
}*head = NULL,*p,*t,*newnode;


void create()
{
	int i,n,ele;
	printf("\nenter the no of list : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the element : ");
		scanf("%d",&ele);
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data = ele;
		newnode->next = NULL;
		if(head==NULL)
		{
			head = newnode;
			p = newnode;
		}
		else
		{
			for(p = head;p->next!=NULL;p = p->next);
			p->next = newnode;
			p = newnode;
		}
	}
}

void Display()
{
	if(head==NULL)
	{
		printf("L.L is empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next)
		{
			printf("%d-->",p->data);
		}
	}
}

void Insert_at_begin()
{
	int ele;
	printf("\nenter the element : ");
	scanf("%d",&ele);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=ele;
	p=head;
	newnode->next=p;
	head=newnode;
	p=newnode;
}


void Insert_at_end()
{
	int ele;
	printf("\nenter the element : ");
	scanf("%d",&ele);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
	
}


void Insert_at_anyposition()
{
	int i,ele,pos;
	printf("\nenter the element : ");
	scanf("%d",&ele);
	printf("\nenter the position : ");
	scanf("%d",&pos);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=ele;
	for(i=1,p=head;i<pos;i++,p= p->next)
	{t=p;}
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
void deleteatbeg()
{int ele;
p=head;
ele=p->data;
head=p->next;
free(p);
p=head;
printf("the deleted element is %d.",ele);
}



int main()
{
    int choice;
    do{
        printf("\n****THE MAIN MENU ****\n");
        printf("\n 1.create");
        printf("\n 2. Display");
        printf("\n 3. Insert_at_begin");
        printf("\n 4. Insert_at_end");
        printf("\n 5. Insert_at_anyposition");
        printf("\n 6. Delete_at_begin");
        printf("\n 7. exit");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
            break;
            case 2:Display();
            break;
            case 3:Insert_at_begin();
            break;
            case 4:Insert_at_end();
            break;
            case 5:Insert_at_anyposition();
            break;
            case 6:deleteatbeg();
            break;
            case 7:exit(0);
            printf("enter the correct choice");
            break;
        }
    }
    while(choice>=1 && choice<=7);
}