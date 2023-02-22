//write a C program to check whether year is leap year or not
#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    year % 400 == 0 || year % 4 == 0 ? printf("It is a leap year") : printf("It is not a leap year");
    return 0;
}
