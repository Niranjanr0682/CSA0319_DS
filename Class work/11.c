#include<stdio.h>
int r,arr[1000];
void print();
void insert();
void delete();
int main() 
    {int ch;
    printf("enter range : ");
    scanf("%d",&r);
    for(int i = 0; i < r; ++i) 
        {printf("enter element %d :",i);
        scanf("%d", &arr[i]);}

    printf("which operation u need to do \n");
    printf("'1' to do insertion\n");
    printf("'2' to do deletion\n");
    printf("'3' to do print\n");
    scanf("%d", &ch);

    switch (ch)
        {
        case 1:
        insert();
        break;
        
        case 2:
        delete();
        break;

        case 3:
        print();
        break;
        }
    }


    
void print()
    {printf("printing the array\n");
    
    for(int i = 0; i < r; ++i) 
        {printf("%d\n",arr[i]);}}

void insert()
    {int i,pos,ele; 
    printf("enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf("enter the value into that poition: ");
    scanf("%d",&ele);
    for(i=r-1;i>=pos-1;i--)
        {arr[i+1]=arr[i];
        arr[pos-1]= ele;}
    r = sizeof(arr);}

void delete()
    {int pos,i;
    printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);  
    if (pos >= r+1)  
        {printf (" \n Deletion is not possible in the array.");}  
    else  
        {for (i = pos - 1; i < r -1; i++)  
            {arr[i] = arr[i+1];}}
    r = sizeof(arr);}