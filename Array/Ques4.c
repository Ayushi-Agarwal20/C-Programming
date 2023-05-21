// write a c program to find the maximum and minimum element in an array
#include <stdio.h>
int main()
{
    int a[10],i, n,min,max;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    min=max=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    printf("Minimum element: %d\n",min);
    printf("Maximum element: %d", max);
    return 0;
}