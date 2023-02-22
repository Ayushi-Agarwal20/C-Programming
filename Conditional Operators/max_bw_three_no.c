//write a C program to find maximum between three numbers using conditional operator
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a>=b && a>=c ? printf("Maximum number is %d",a) : b>c ? printf("Maximum number is %d",b) : printf("Maximum number is %d",c);
    return 0;
}
