#include <stdio.h>
#include <stdlib.h>

int max,stack[1000],top=-1;
char z;

void push()
    {int num;
    printf("enter the element : ");
    scanf("%d",&num);
    if(top==max-1)
        {printf("\nthe stack is already full,do you need to add pop some by using option '2' in menu\n");}
    else
        {top=top+1;
        stack[top]=num;}
    printf("\n");}

void pop()
    {int num;
    if(top==-1)
        {printf("the stack is empty,please insert some value by using option '1' in menu");}
    else
        {num=stack[top];
        top=top-1;}
    printf("the elemets are:%d",num);
    printf("\n");}

void peak()
    {if(top==-1)
        {printf("the stack is empty,there is no value in it.");}
    else
        {printf("the top most element in the stack is : %d",stack[top]);}
    printf("\n");} 

void display()
    {int i;
        if(top==-1)
            {printf("the stack is empty,please add some elements in the stack.");}
        else
            {for(i=top;i>=0;i--)
                {printf("the elemet in the postion %d is : %d\n",i,stack[i]);}}
    printf("\n");}

// char exit()
//     {printf("you are about to end the operation.\n");
//     printf("if you really want to exit press 'y'.\n");
//     printf("or you want to continue press 'n'.\n" );
//     printf("enter character y/n : ");
//     scanf("%c",&z);
//     if(z== 'y')
//         {exit(0);}}


int main()
{
    printf("enter the stack level :");
    scanf ("%d",&max);
    int ch;
    do{
        printf("the menu_________");
        printf("\n \t1.to do push");
        printf("\n \t2.to do pop");
        printf("\n \t3.to see peak value ");
        printf("\n \t4.to display stack");
        printf("\n \t5.to exit menu");
        printf("\n enter what operation you need to do : ");
        scanf("%d",&ch);
        switch(ch)
            {case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peak();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            //printf("enter the correct ch");
            break;}
    }
    while(ch>=1 && ch<=5);
} 