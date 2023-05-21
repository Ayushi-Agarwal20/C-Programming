// write a c program to find the second largest element in an array
#include <stdio.h>
int main()
{
    int a[10],n,i,max,secondmax;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            secondmax=max;
            max=a[i];
        }
        else if(a[i]<max && a[i]>secondmax)
        secondmax=a[i];
    }
    printf("Second largest element is: %d", secondmax);
    return 0;
}