#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,rev=0,r,original;
    scanf("%d", &n);
    original=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(original == rev)
        printf("Palindrome.");
    else
        printf("Not Palindrome.");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
