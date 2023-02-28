#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int c,n,d,out;
    scanf("%d", &c);
    scanf("%d", &n);
    scanf("%d", &d);
    out=c+n*d-n;
    printf("%d", out);
    return 0;
}