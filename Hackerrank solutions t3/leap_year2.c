#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
       int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 400 == 0)
        {
            printf("%d ", i);
        }
        else if (i % 4 == 0 && i % 100 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
