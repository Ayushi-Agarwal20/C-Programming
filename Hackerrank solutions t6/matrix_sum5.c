#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,m,n;
    int sum,product;
    int a[10][10];
    
    scanf("%d",&m);

    scanf("%d",&n);

    for(i=0;i< m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    sum =0;
    product  =1;
    for(i=0;i< m;i++)
    {
        for(j=0;j< n;j++)
        {
            sum += a[i][j];
            product *= a[i][j];
        }
    
    }

    printf("%d %d",sum,product);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}