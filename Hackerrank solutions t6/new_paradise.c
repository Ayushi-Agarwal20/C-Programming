#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);  // Number of locations

    int maxRoutes = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int routes;
        scanf("%d", &routes);

        if (routes > maxRoutes) {
            maxRoutes = routes;
            count = 1;
        } else if (routes == maxRoutes) {
            count++;
        }
    }

    printf("%d\n", count);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
