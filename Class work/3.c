#include<stdio.h>
int fact();
int main()
{printf("\nthe factorial of given number is : %d\n",fact());
printf("\n");}

int fact()
{
int i,a=1,b;    
    printf("Enter a number: ");    
    scanf("%d",&b);    
        for(i=1;i<=b;i++)
        {a=a*i;}      
    return a; }