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
{
	int ele;
	p=head;
	ele=p->data;
	head=p->next;
	free(p);
	p=head;
	printf("the deleted element is %d.",ele);
}

void deleteatend()
{
	int ele;
	for(p=head;p->next!=NULL;p=p->next)
	t=p;
	ele = p->data;
	t->next=NULL;
	free(p);
	p=t;
	printf("the deleted element is %d",ele);
}

void deleteatpos()
{
	int i,ele,pos;
	printf("\nenter the element : ");
	scanf("%d",&ele);
	printf("\nenter the position : ");
	scanf("%d",&pos);
	for(p=head,i=1;i<pos;i++,p=p->next)
		{t=p;}
	ele=p->data;
	t->next=p->next;
	free(p);
	p=t;
	printf("the element %d at position %d is successfully deleted",ele,pos);
}

void eocount()
{
	int o=0,e=0;
	for(p=head;p->next!=NULL;p=p->next)
	{if (p->data%2==0)
		e++;
	else
		o++;}
	printf("the even count = %d",e);
	printf("the odd count = %d",o);
}

void sum()
{
	int s=0;
	for(p=head;p!=NULL;p=p->next)
	{s=s+p->data;}
	printf("the sum of the elements is %d",s);
}

void product()
{
	int m=1;
	for(p=head;p!=NULL;p=p->next)
	{m=m*p->data;}
	printf("the product of the elements is %d",m);
}

void oddprint()
{
	int op=1;
	for(op,p=head;p!=NULL;op++,p=p->next)
	{if (op%2!=1)
	{printf("%d\t ",p->data);}}
}
void evenprint()
{
	int ev=1;
	for(ev,p=head;p!=NULL;ev++,p=p->next)
	{if (ev%2!=0)
	{printf("%d\t ",p->data);}}
}


int main()
{
    int choice;
    do{
        printf("\n****THE MAIN MENU ****\n");
        printf("\n 1. create");
        printf("\n 2. Display");
        printf("\n 3. Insert_at_begin");
        printf("\n 4. Insert_at_end");
        printf("\n 5. Insert_at_anyposition");
        printf("\n 6. Delete_at_begin");
		printf("\n 7. Delete_at_end");
		printf("\n 8. Delete_at_anyposition");
		printf("\n 9. odd even count");
		printf("\n10. sum of elements in list");
		printf("\n11. product of elements in list");
		printf("\n12. print odd elements in list");
		printf("\n13. print even elements in list");
        printf("\n14. exit");
        printf("\n enter your choice : ");
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
			case 7:deleteatend();
			break;
			case 8:deleteatpos();
			break;
			case 9:eocount();
			break;
			case 10:sum();
			break;
			case 11:product();
			break;
			case 12:oddprint();
			break;
			case 13:evenprint();
			break;
            case 14:exit(0);
            printf("enter the correct choice");
            break;
        }
    }
    while(choice>=1 && choice<=14);
}