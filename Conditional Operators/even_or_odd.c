//write a c program to check whether a number is even or odd using conditional operators
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    a % 2 == 0 ? printf("It is an even number") : printf("It is an odd number");
    return 0;
}
