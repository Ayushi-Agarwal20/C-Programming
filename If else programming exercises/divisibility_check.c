# include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a % 5 == 0 || a % 11 == 0)
    {
    printf("a is divisible");
    }
    else 
    {
        printf("a is not divisible");
    }
    return 0;
}