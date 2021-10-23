#include<stdio.h>
#include<conio.h>

void main(){
    int n,first,middle,last,a[100],c,search;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(c=0;c<n;c++){
        scanf("%d",&a[c]);
    }
     for(c=0;c<n;c++){
        printf("%d \t",a[c]);
    }
    first = 0;
    last=n-1;
    middle=(first+last)/2;
    printf("\n Enter search value from elements : ");
    scanf("%d",&search);
    while(first<=last){
        if(a[middle]<search){
            first=middle+1;
        }else if(a[middle]==search){
            printf("Element found at location %d !",middle+1);
            break;
        }else{
            last=middle-1;
            middle=(first+last)/2;
        }
    }
    if(first>last){
        printf("value not found!");
    }
}
