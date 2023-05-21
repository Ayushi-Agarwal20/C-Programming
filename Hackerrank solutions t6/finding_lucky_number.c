#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,f=0,len,d;
    scanf("%d",&n);
    len = log10(n)+1;
    for(int i=0;i<len;i++){
        d = n%10;
        if (d==3){
            f = f+1;
        }
        if (d==9){
            f = f+1;
        }
        n = n/10;
    }
    if (f>=2){
        printf("Yes");
    }else{
        printf("No");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
