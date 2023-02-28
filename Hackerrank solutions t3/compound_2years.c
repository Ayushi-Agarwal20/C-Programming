#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    double P,R,A,C;
    scanf("%lf", &P);
    scanf("%lf", &R);
    A=P*((pow((1+R/100),2)));
    C=A-P;
    printf("%.2lf", C);
    return 0;
}
