// write a c program to count total number of even and odd elements in an array
#include <stdio.h>
int main()
{
    int a[10],n,i,even=0,odd=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Even numbers are %d\n",even);
    printf("Odd numbers afre %d", odd);
    return 0;
}