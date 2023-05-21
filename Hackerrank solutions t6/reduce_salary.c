#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int e1 = -1;
    int e2 = -1;
    
    for (int i = 0; i < n; i++) {
        int salary;
        scanf("%d", &salary);
        
        if (salary > e1) {
            e2 = e1;
            e1 = salary;
        } else if (salary > e2 && salary < e1) {
            e2 = salary;
        }
    }
    
    printf("%d %d\n", e1, e2);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
