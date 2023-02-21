//write a C program to check whether character is an alphabet or not using conditional operator
#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf("It is an alphabet");
    }
    else
    {
        printf("It is not an alphabet");
    }
    return 0;
}