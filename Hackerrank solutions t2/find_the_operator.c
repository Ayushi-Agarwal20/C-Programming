#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c==a+b)
    {
    printf("+");    
    }
    else if (c==a-b)
    {
    printf("-");
    }
    else if (c==a*b)
    {
        printf("*");
    }
    else if (c==a/b)
    {
        printf("/");
    }
    else if (c==a%b)
    {
        printf("%%");
    }
    return 0;
}