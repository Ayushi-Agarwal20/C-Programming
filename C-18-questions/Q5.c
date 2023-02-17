//write a C program to enter length and breadth of a rectangle and find its area
#include <stdio.h>
void main()
{
    int l,b,a;
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("The Area is %d",a);
}