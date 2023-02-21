//write a C program to check whether year is leap year or not
#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if(year % 400 == 0 || year % 4 == 0)
    {
        printf("It is a leap year");
    }
    else if(year % 100 == 0)
    {
        printf("It is not a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}