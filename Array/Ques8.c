// write a c program to copy all the elements from an array to another array
#include <stdio.h>
int main()
{
    int a[10],b[10],n,i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("Original array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nCopied array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}