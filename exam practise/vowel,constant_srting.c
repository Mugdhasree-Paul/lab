#include<stdio.h>
int main(){
    char str[100],ch;
    int i, v,c;
    printf("Enter string:");
    gets(str);
    i=v=c=0;
    while((ch=str[i])!='\0'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
           v++;
        else 
           c++;
        i++;   

    }
    printf("vowel is %d\nconsonant is %d",v,c);


}