#include<stdio.h>
#include<conio.h>

void main(){
    int a[5],b[5],c[10],i,j,m,n;
    printf("Enter the limit of first array : ");
    scanf("%d" ,&n);
    printf("Enter elements of first array : ");
    for(i=0;i<n;i++){
        scanf("%d" ,&a[i]);
    }
     printf("Enter the limit of second array : ");
    scanf("%d" ,&m);
    int size = m+n;
    printf("Enter elements of second array : ");
    for(i=0;i<m;i++){
        scanf("%d" ,&b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0,j=n;j<size&&i<m;i++,j++){
        c[j]=b[i];
    }
    printf("the new appended array : \n");
    for(i=0;i<size;i++){
        printf("%d \n" ,c[i]);
    }
}
