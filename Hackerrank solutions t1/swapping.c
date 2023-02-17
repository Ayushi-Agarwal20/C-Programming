#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("%d %d", a,b);
    return 0;
}
