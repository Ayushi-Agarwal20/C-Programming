#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        printf("alphabet");
    }
    else if(a>='A' && a<='Z')
    {
        printf("alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
    return 0;
}