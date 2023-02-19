#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,B,G,I,D;
    scanf("%d %d %d %d %d", &N,&B,&G,&I,&D);
    int al=(B*I)-(G*D);
    if(al<0)
        printf("Funny Questions");
    else if(al>0)
        printf("Simple Questions");
    else
        printf("God Knows!");
    return 0;
}
