//C Program for Inorder traversal of the binary search tree  

#include<stdio.h>  
#include<stdlib.h>  
  
struct node  
{  
    int key;  
    struct node *left;  
    struct node *right;  
};  
  
//return a new node with the given value  
struct node *getNode(int val)  
{  
    struct node *newNode;  
  
    newNode = malloc(sizeof(struct node));  
  
    newNode->key   = val;  
    newNode->left  = NULL;  
    newNode->right = NULL;  
  
    return newNode;  
}  
  
//inserts nodes in the binary search tree  
struct node *insertNode(struct node *root, int val)  
{  
     if(root == NULL)  
         return getNode(val);  
  
     if(root->key < val)  
         root->right = insertNode(root->right,val);  
  
     if(root->key > val)  
         root->left = insertNode(root->left,val);  
  
     return root;  
}  
// void insert(struct node *root)
// {
// int data;  
//     scanf("%d",&data);  
//     root = insertNode(root,data);}
 
void inorder(struct node *root)  
{  
    if(root == NULL)
    printf("\nempty tree");
        return;  
    inorder(root->left);//traverse the left subtree  
    printf("%d, ",root->key);//visit the root  
    inorder(root->right); //traverse the right subtree  
     
}  
  
void preorder(struct node *root)  
{  
    if(root == NULL)
    printf("\nempty tree"); 
        return;  
    printf("%d, ",root->key);//visit the root
    preorder(root->left);//traverse the left subtree 
    preorder(root->right);//traverse the right subtree 
}  

void postorder(struct node *root)  
{  
    if(root == NULL)
    printf("\nempty tree"); 
        return;  
    postorder(root->left);//traverse the left subtree  
    postorder(root->right);//traverse the right subtree   
    printf("%d, ",root->key);//visit the root    
}  

int main()  
{  
    struct node *root = NULL;    
    int choice;
    do{ 
        printf("\n___Main Menu___");  
        printf("\n  1. To insert a new node in the Binary Tree");  
        printf("\n  2. To display elements via Inorder Traversal.");
        printf("\n  3. To display elements via Preorder Traversal.");  
        printf("\n  4. To display elements via Postorder Traversal.");
        printf("\n  5. To display elements to end the page & exit. ");
        printf("\n\nenter the choice : ");
        scanf("%d",&choice);              
        switch (choice)  
        {  
        case 1 :printf("\nEnter the data to be inserted : ");
            int data;  
            scanf("%d",&data);  
            root = insertNode(root,data);
            break;                                
        case 2 :printf("\nInorder Traversal of the Binary Tree:");  
            inorder(root);  
            break;   
        case 3 :printf("\nPreorder Traversal of the Binary Tree:");  
            preorder(root);  
            break; 
        case 4 :printf("\nPostorder Traversal of the Binary Tree:");  
            postorder(root);  
            break; 
        case 5 :printf("\nExiting the Program..\n");
            exit(0);
            break;
        }  
  
    } while(choice>=1 && choice<=5);    
}  

