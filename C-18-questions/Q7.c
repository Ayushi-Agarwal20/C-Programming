//write a C program to enter length in centimeter and convert it into meter and kilometer
#include <stdio.h>
int main()
{
    float length,meter,kilometer;
    printf("Enter the length in centimeter: ");
    scanf("%f",&length);
    meter=length/100;
    kilometer=length/100000;
    printf("%f \n",meter);
    printf("%f",kilometer);
    return 0;
}