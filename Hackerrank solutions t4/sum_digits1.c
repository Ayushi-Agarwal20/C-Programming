#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0,m;    
    scanf("%d",&n);    
    while(n>0)    
    {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }    
    printf("%d",sum);  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
