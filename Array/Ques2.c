// write a c program to print all the negative elements in an array
#include <stdio.h>
int main()
{
    int a[10],i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("All negative elements in array are: ");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        printf("%d ", a[i]);
    }
    return 0;
}