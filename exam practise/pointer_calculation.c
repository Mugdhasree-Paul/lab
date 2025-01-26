#include<stdio.h>
int main()
{
   int n1,n2,*ptr1,*ptr2,a,s,m,d;
   printf("Enter two numbers:") ;
   scanf("%d %d",&n1,&n2);

   ptr1=&n1;
   ptr2=&n2;


   a=*ptr1+*ptr2;
   printf("Addition:%d\n",a);

   s=*ptr1-*ptr2;
   printf("Subtraction:%d\n",s);

   m=*ptr1 * *ptr2;
   printf("Multiplication:%d\n",m);

   d=*ptr1 / *ptr2;
   printf("Division:%d\n",d);

    return 0;
}