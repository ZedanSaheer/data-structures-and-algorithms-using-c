#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

void main(){
int i,j,k,n,m,flag=0;
char t[40],p[40];
printf("Enter text : ");
gets(t);
printf("Enter pattern : ");
gets(p);
n=strlen(t);
m=strlen(p);
for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m&&p[j]==t[j+i])
            {
                if(j==m){
                    flag=1;
                    k+=1;
                }
                else{
                    flag=0;
                }
            }
    }
if(flag==1)
    printf("pattern found at position : %d" ,k);
else
    printf("pattern not found!");

getch();
}
