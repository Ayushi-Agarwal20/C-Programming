// write a C program to delete an element from an array at specified position
# include<stdio.h>
int main()
{
    int a[10],i,n,position;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        printf("a[%d]", i);
        scanf("%d", a[i]);
    }
    printf("Position of the element to be deleted: ");
    scanf("%d", &position);
    if(position >= n+1)
    printf("\nDeletion is not possible.");
    else
    {
        for(i=position-1;i<n;i++)
        {a[i]=a[i+1];}
    }
    printf("The new array is: ");
    for(i=0;i<n;i++)
    {
        printf (" a[%d] = ", i);  
        printf (" %d \n", a[i]);  
    }
    return 0;
}