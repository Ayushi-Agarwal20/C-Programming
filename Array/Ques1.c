// write a C program to read and print elements of an array
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the range ");
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(n[i]<0)
        printf("%d ",n[i]);
    }
    return 0;
}   