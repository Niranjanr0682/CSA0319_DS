#include<stdio.h>
#include<stdlib.h>
int a[1111110],i,n;

void input_array()
{
    printf("enter the elemnts into array\n");
    for(i=0;i<n;i++)
    {
        printf("enter element[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
}

void display()
{
    printf("output is: \n");
    for(i=0;i<n;i++)
    {
        printf("\tthe element[%d] is %d\n",i+1,a[i]);
    }
    printf("\n");
}

void insertion()
{
    int pos,ele;
    printf("enter the postion : ");
    scanf("%d",&pos);
    printf("enter element to insert in the position %d : ",pos);
    scanf("%d",&ele);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
        
    }
    a[pos]=ele;
}
void delete_array()
{
    int pos;
    printf("enter position to delete : ");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
}

void sort(int a[10], int n)
{
 int i, j, temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]>a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 printf("\nthe array is sorted\n\n");
}
int main()
{
    printf("enter range for array : ");
    scanf("%d",&n);

    int choice;
    do{
    printf("__Mainmenu__");
    printf("\n 1.to input the array");
    printf("\n 2.to insert an element in array");
    printf("\n 3.to delete an element in array");
    printf("\n 4.to sort the an array");
    printf("\n 5.to display the array");
    printf("\n 6.to end the page & exit ");
    printf("\n\n enter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:input_array();
        break;
        case 2:insertion();
        break;
        case 3:delete_array();
        break;
        case 4:sort(a,n);
        break;
        case 5:display();
        break;
        case 6:exit(0);
        break;
        
    }

}
while(choice>=1 && choice<=5);
}