#include<stdio.h>

int main()
{
    int i,j,count,temp,number[25];
    printf("Enter the limit : ");
    scanf("%d",&count);
    printf("Enter the elements : ");
    for(i=0;i<count;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=1;i<count;i++)
    {
        temp=number[i];
        j=i-1;
        while((j>=0)&&(temp<number[j])){
            number[j+1]=number[j];
            j--;
        }
        number[j+1]=temp;
    }
    printf("Sorted elements : ");
    for(i=0;i<count;i++)
    {
        printf("%d \t",number[i]);
    }
    getch();
    return 0;
}
