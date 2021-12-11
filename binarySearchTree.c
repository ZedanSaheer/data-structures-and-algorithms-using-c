#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct TreeNode
{
int data;
struct TreeNode *leftChildNode;
struct TreeNode *rightChildNode;
};
typedef struct TreeNode node;
node *rootNode = NULL;

void insertNode(int i,node **n)
{
    if (*n == NULL)
    {
    (*n) = (node*)malloc(sizeof(node));
    (*n)->leftChildNode = NULL;
    (*n)->rightChildNode = NULL;
    (*n)->data = i;
    }
    else if((*n)->data==i){
        printf("Sorry,value exists!");
    }
    else if(i>(*n)->data)
    {
        insertNode(i,&((*n)->rightChildNode));
    }
    else{
        insertNode(i,&((*n)->leftChildNode));
    }
}

void searchNode(int i ,node**n)
{
    if((*n)==NULL)
    {
        printf("Value does not exist in tree!");
    }
    else if((*n)->data==i)
    {
        printf("Value found!");
    }
    else if(i>(*n)->data)
    {
        searchNode(i,&((*n)->rightChildNode));
    }
    else{
        searchNode(i,&((*n)->leftChildNode));
    }
}

int main()
{
    int ch , num ;
    do{
        printf("\n Select a choice from below : \n 1. Insert a node \n 2. Search for a node \n 3. Exit \n");
        printf("Enter your choice : ");
        scanf("%d" , &ch);
        switch(ch)
        {
        case 1:
            printf("Enter an element : ");
            scanf("%d" , &num);
            insertNode(num,&rootNode);
            break;
         case 2:
            printf("Enter an element  to search : ");
            scanf("%d" , &num);
            searchNode(num,&rootNode);
            break;
         case 3:
            exit(0);
         default:
            printf("Invalid choice");
        }
    }while(num!=3);
    getch();
    return 0;
}
