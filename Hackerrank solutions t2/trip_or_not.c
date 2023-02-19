#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N,S,C,H,L,T;
    scanf("%d %d %d %d %d %d", &N,&S,&C,&H,&L,&T);
    if(S*C*H<=(N-L)*T)
        printf("Goa Jaayenge");
    else
        printf("Padhai Karenge");
    return 0;
}
