#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10];
    int i,j,m,n;
    int sum;

    scanf("%d",&m);

    scanf("%d",&n);

    for(i=0;i< m;i++)
    {
        for(j=0;j< n;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    for(i=0;i< m;i++)
    {
        sum=0;   
        for(j=0;j< n;j++)
        {
            sum += a[i][j];
        }
        printf("%d ",sum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
