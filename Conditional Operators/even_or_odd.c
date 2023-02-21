//write a c program to check whether a number is even or odd using conditional operators
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
}