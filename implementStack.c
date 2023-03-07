#include<stdio.h>

int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main(){
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do{
        printf("\n Enter the Choice:");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1:{
            push();
            break;
            }
            case 2:{
            pop();
            break;
            }
            case 3:{
            display();
            break;
            }
            case 4:{
                printf("Exit point");
                break;
            }
            default:{
            printf("please enter valid choice");
            }
        }
    }while(choice!=4);
    return 0;
}

void push(){
    printf("enter number to push :");
    scanf("%d",&x);
    top++;
    stack[top]=x;
}

void pop(){
    if(top<=-1){
        printf("stack underflow!");
    }else{
        printf("\n the popped element is %d",stack[top]);
        top--;
    }
}

void display(){
        if(top>=0){
            printf("the elements in the stack");
            for(i=top;i>=0;i--){
                printf("%d",stack[i]);
            }
        }else{
        printf("the stack is empty");
        }
    }

