#include<stdio.h>
#include<conio.h>

int main(){
    int array[10],n,i,j,temp;
    printf("Enter the limit :");
    scanf("%d" ,&n);
    printf("Enter the Elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<(n-1);i++){
        for(j=(i+1);j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
        }
    }
}
    printf("Sorted elements : ");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    getch();
    return 0;
}
