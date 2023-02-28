#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int C,K,N;
    scanf("%d%d%d", &C,&K,&N);
    printf("%0.0f",pow(K,N)*C);
    return 0;
}