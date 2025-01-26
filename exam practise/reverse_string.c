#include<stdio.h>
int main(){
    char str1[40],str2[40];
    printf("Enter string:");
    gets(str1);
    //printf("1st string is=%s\n",str1);
    int i=0,j=0,len=0;
    while(str1[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++){
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("2nd string is=%s",str2);
 

}