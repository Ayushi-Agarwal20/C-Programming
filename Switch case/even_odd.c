# include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    switch(num%2)
    {
        case 0:
        printf("num is even");
        break;
        case 1:
        printf("num is odd");
        break;
    }
    return 0;
}