// Write a C program to print all unique elements in the array

#include <stdio.h>
int main()
{
    int a[10], freq[10];
    int n, i, j, count;
 
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }
 
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
 
    printf("\nUnique elements in the array are: ");
    for(i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}