#include<stdio.h>
int main(){
    char s1[40];
    printf("enter any name:");
    gets(s1);
    printf("The name is %s",s1);
    int len=0;
    int i=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length =%d\n",len);
}