#include <stdio.h>
#include <stdlib.h>

int fr = -1,rr = -1,max,q[100000000000000];
//char z;

void enq()
    {int ele;
    printf("enter the element : ");
    scanf("%d",&ele);
    if (rr == max -1)
    {printf("\nthe queue is already full,do you need to add deq some by using option '2' in menu\n");}
    else
    {if (fr==-1 && rr==-1)
        {fr =0;
        rr =0;}
    // else
    //     {if(fr != 0 && rr == max -1)
    //         {rr = 0;}
        else
            {rr +=1;
            q[rr] = ele;}}
        }

void deq()
    {int ele;
    if(fr ==-1 && rr == -1)
        {printf("the queue is empty,please insert some value by using option '1' in menu");}
    else
        {ele=q[fr];
        if (fr == rr)
        {fr = -1;
        rr = -1;}
        else
        {fr+=1;}
    printf("the dequeued element is : %d",ele);
    printf("\n");} }

void disp()
    {int i;
        if(fr==-1 && rr == -1)
            {printf("the queue is empty,please add some elements in it.");}
        else
            {for(i=fr;i<=rr;i++)
                {printf("the elemet in the postion %d is : %d\n",i,q[i]);}}
    printf("\n");}




int main()
{
    printf("enter the queue level :");
    scanf ("%d",&max);
    int ch;
    do{
        printf("the menu_________");
        printf("\n \t1.to do enque operation");
        printf("\n \t2.to do deque operation");
        printf("\n \t3.to display queue");
        printf("\n \t4.to exit the operation");
        printf("\n enter what operation you need to do : ");
        scanf("%d",&ch);
        switch(ch)
            {case 1:enq();
            break;
            case 2:deq();
            break;
            case 3:disp();
            break;
            case 4:exit(0);
            break;}
    }
    while(ch>=1 && ch<=4);
} 