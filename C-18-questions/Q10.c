//write a c program to convert days into years, weeks and days.
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/365;
    c=a%365;
    d=c/7;
    e=c%7;
    printf("%d \n",b);
    printf("%d \n",d);
    printf("%d \n",e);
    return 0;
}