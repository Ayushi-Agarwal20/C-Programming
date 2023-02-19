#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    if(t>4 && t<=12)
        printf("%s", "Good Morning");
    else if(t>12 && t<=16)
        printf("%s", "Good AfterNoon");
    else if(t>16 && t<=21)
        printf("%s", "Good Evening");
    else if(t>22 && t<=24)
        printf("%s", "Good Night");
    else
        printf("%s", "Good Night");
    return 0;
}