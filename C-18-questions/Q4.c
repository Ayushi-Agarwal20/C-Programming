//write a C program to enter length and breadth of a rectangle and find its perimeter
#include <stdio.h>
void main()
{
    int length,breadth,p;
    scanf("%d%d",&length,&breadth);
    p=2*(length+breadth);
    printf("The perimeter is, %d",p);
}