#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char *s;
    int len ,i;
    printf("Enter a string : ");
    gets(s);
    len = strlen(s);
    printf("\n \n The reverse of your string is : ");
    for(i=len;i>=0;i--){
            printf("%c",*(s+i));
        }
    getch();
}


