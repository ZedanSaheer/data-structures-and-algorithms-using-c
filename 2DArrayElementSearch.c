#include<stdio.h>
#include<conio.h>

void main(){
int a[10][10],row,col,i,j,val,found=0;
printf("Enter the number of rows : ");
scanf("%d",&row);
printf("Enter the number of colomns : ");
scanf("%d",&col);
printf("Enter the elements of matrix : \t");
for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
}
printf("Entered matrix is : \n");
for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
}
while(found==0){
    printf("Enter element to be searched :");
scanf("%d",&val);
for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j]==val){
                printf("\t value found at row : %d and column : %d",i+1,j+1);
                found=1;
            }
        }
}
if(found==0){
    printf("value not found! \n");
}
}
}
