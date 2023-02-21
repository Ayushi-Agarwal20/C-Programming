//write a C program to find maximum between two numbers using conditional operator
#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1>n2)
    {
    printf("Maximum is %d", n1);
    }
    else
    {
        printf("Maximum is %d", n2);
    }
    return 0;
}