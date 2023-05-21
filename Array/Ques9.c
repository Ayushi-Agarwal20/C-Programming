// write a C program to insert an element in an array
#include <stdio.h>
int main()
{
    int a[10],i,n,element;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    a[i]=element;
    printf("Ner array is ");
    for(i=0;i<n+1;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}