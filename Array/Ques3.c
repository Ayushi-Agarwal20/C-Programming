// write a c program to find the sum of all array elements
#include <stdio.h>
int main()
{
    int a[10],i, n, sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sum of all elements is: ");
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}