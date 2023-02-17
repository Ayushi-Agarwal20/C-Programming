//write a C program to enter the radius of a circle and find its diameter, circumference and area
#include <stdio.h>
int main()
{
    int r,d,c,a;
    scanf("%d",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("The diameter is %d \n",d);
    printf("The circumference is %d \n",c);
    printf("The area is %d \n",a);
    return 0;
}