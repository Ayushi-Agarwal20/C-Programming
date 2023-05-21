// write a c program to count total number of negative elements in an array
#include <stdio.h>
int main()
{
    int a[10],n,i,k=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        k++;
    }
    printf("Total negative elements are: %d", k);
    return 0;
}