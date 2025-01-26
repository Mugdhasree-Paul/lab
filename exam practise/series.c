#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i==n)
        printf("%d=",i);
        else 
        printf("%d+",i);
    }

    for(int i=0;i<=n;i++)
    sum=sum+i;
    printf("%d",sum);

}