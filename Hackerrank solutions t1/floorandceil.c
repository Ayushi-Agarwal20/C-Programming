#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float num;
    scanf("%f", &num);
    printf("%f\n", floor(num));
    printf("%f", ceil(num));
    return 0;
}