#include<stdio.h>
int main()
{
    int i,n,a,oc = 0,ec = 0;
    printf("enter range : ");
    scanf("%d",&i);
    for(n = 0;n<=i;n++)
    {if (n%2 == 0)
    {ec ++ ;}
    else
    {oc ++;}}
    printf("odd count %d",oc);
    printf("\n");
    printf("even count %d",ec);
    }