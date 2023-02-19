#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p1, p2, p3, a;
    scanf("%d%d%d%d", &p1, &p2, &p3, &a);
    float r1 = 0, r2 = 0, r3 = 0;
    if(p1<=a && p2<=a && p3<=a){
        r1 = 0.333;
        r2 = 0.333;
        r3 = 0.333;
    }
    else if(p1>a && p2>a && p3>a){
        r1 = 0.000;
        r2 = 0.000;
        r3 = 0.000;
    }
    else if(p2>a && p3>a){
        r1 = 1.000;
        r2 = 0.000;
        r3 = 0.000;
    }
    else if(p1>a && p3>a){
        r1 = 0.000;
        r2 = 1.000;
        r3 = 0.000;
    }
    else if(p1>a && p2>a){
        r1 = 0.000;
        r2 = 0.000;
        r3 = 1.000;
    }
    else if(p1>a){
        r1 = 0.000;
        r2 = 0.500;
        r3 = 0.500;
    }
    else if(p2>a){
        r1 = 0.500;
        r2 = 0.000;
        r3 = 0.500;
    }
    else if(p3>a){
        r1 = 0.500;
        r2 = 0.500;
        r3 = 0.000;
    }
    printf("%.3f\n%.3f\n%.3f", r1, r2, r3);
    return 0;
}