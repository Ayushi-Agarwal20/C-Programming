#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float percentage,S,C,loss,profit;
    scanf("%f", &C);
    scanf("%f", &S);
    if(C>S)
    {
       loss=C-S;
        percentage=(loss/C)*100;
       printf("Loss \n");
        printf("%.2f%%", percentage);    }
    else
    {
        profit=(S-C);
        percentage=(profit/C)*100;
        printf("Profit \n");
        printf("%.2f%%", percentage);
    }
    return 0;
}
