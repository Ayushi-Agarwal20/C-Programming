#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int P,R,T,A,S;
    scanf("%d", &P);
    scanf("%d", &R);
    scanf("%d", &T);
    S=(P*R*T)/100;
    A=S+P;
    printf("%d", A);
    return 0;
}
