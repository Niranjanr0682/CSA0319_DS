// #include<stdio.h>
// int main() 
//     {
//     int a[100][100],i,j,r,c;                             
//     printf("enter how many rows and columns for a\n");                                 
//     printf("enter rows   :" );                                                         
//     scanf("%d",&r);                                                               
//     printf("enter column :" );                                                         
//     scanf("%d",&c);                                                           
//     printf("Enter elements of 1st matrix\n");                                          
//     for (i = 0; i < r; ++i)         // for row                 
//         {for (j = 0; j < c; ++j)    // for column                                     
//             {printf("Enter element a[%d][%d]: ",i + 1 ,j + 1 ); //for elements    
//             scanf("%d", &a[i][j]);}}                                                   
//     // printing the matrix
//     printf("\nthe matrix is : \n");
//     for (i = 0; i < r; ++i)
//         {for (j = 0; j < c; ++j)
//             {printf("%d   ", a[i][j]);
//             if (j == c - 1)
//                 {printf("\n\n");}}}

//     }


#include<stdio.h>

int main() 
    {
    int a[100][100], b[100][100], d[100][100],i,j,k,r,c;                               // for a matrix
    printf("enter how many rows and columns for a\n");                                 // for a matrix
    printf("enter rows   :" );                                                         // for a matrix
    scanf("%d",&r);                                                                    // for a matrix
    printf("enter column :" );                                                         // for a matrix
    scanf("%d",&c);                                                                    // for a matrix
    printf("Enter elements of 1st matrix\n");                                          // for a matrix
    for (i = 0; i < r; ++i)// for row                                                  // for a matrix
        {for (j = 0; j < c; ++j)// for column                                          // for a matrix
            {printf("Enter element a[%d][%d]: ", i + 1, j + 1); //for elements         // for a matrix
            scanf("%d", &a[i][j]);}}                                                   // for a matrix
    printf("enter how many rows and columns for b\n");                                 // for b matrix
    printf("enter rows   :" );                                                         // for b matrix
    scanf("%d",&r);                                                                    // for b matrix
    printf("enter column :" );                                                         // for b matrix
    scanf("%d",&c);                                                                    // for b matrix
    printf("Enter elements of 2nd matrix\n");                                          // for b matrix
    for (i = 0; i < r; ++i)                                                            // for b matrix
        {for (j = 0; j < c; ++j)                                                       // for b matrix
            {printf("Enter element b[%d][%d]: ", i + 1, j + 1 );                       // for b matrix
            scanf("%d", &b[i][j]);}}                                                   // for b matrix
    // multiplying two matrices   
    for(i=0;i<r;i++)    
        {for(j=0;j<c;j++)    
            {d[i][j]=0;    
                for(k=0;k<c;k++)    
                    {d[i][j]+=a[i][k]*b[k][j];}}}  
    // printing the result
    printf("\nmultiply of two matrices: \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
            {printf("%d   ", d[i][j]);
            if (j == c - 1)
                {printf("\n\n");}}}

}