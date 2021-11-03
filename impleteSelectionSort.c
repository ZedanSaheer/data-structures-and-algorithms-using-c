#include<stdio.h>
#include<conio.h>

void main(){
    int a[100],pos,n,i,j,swap;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter element %d : ", i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        pos = i;
        for(j=i+1;j<n;j++){
            if(a[pos]>a[j]){
                pos = j;
            }
              if(pos != i){
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
                }
        }
    }
    printf("\n Sorted Elements : ");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    getch();
    return;
}
