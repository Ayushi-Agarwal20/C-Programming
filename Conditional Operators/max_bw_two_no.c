//write a C program to find maximum between two numbers using conditional operator
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    a>b ? printf("Maximum number is %d",a) : printf("Maximum number is %d",b);
    return 0;
}
