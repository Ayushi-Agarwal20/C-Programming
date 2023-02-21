//write a C program to find maximum between three numbers using conditional operator
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
    {
    printf("Maximum is %d", n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("Maximum is %d", n2);
    }
    else
    {
        printf("Maximum is %d", n3);
    }
    return 0;
}