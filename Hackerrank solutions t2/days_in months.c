#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int month;
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("%d",31);
        break;
    case 2:
        printf("%d",28);
        break;
    case 3:
        printf("%d",31);
        break;      
    case 4:
        printf("%d",30);
        break;
    case 5:
        printf("%d",31);
        break;
    case 6:
        printf("%d",30);
        break;
    case 7:
        printf("%d",31);
        break;
    case 8:
        printf("%d",31);
        break;
    case 9:
        printf("%d",30);
        break;
    case 10:
        printf("%d",31);
        break;
    case 11:
        printf("%d",30);
        break;
    case 12:
        printf("%d",31);
        break;
    default:
        printf("Wrong month value.");
        break;
    }
    return 0;
}
