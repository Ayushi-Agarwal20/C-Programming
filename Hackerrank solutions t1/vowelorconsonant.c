#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Vowel.");
    }
    else if(!isalpha(ch)==0)
    {
        printf("Consonant.");
    }
    else
    {
        printf("Not an alphabet.");
    }
    return 0;
}
