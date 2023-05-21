#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

    int T;
    scanf("%d", &T);

    while (T--) {
        char S[1000000];
        scanf("%s", S);

        int count[26] = {0};
        int n = strlen(S);
        for (int i = 0; i < n; i++) {
            count[S[i] - 'a']++;
        }

        int max1 = -1; 
        int max2 = -1;  

        for (int i = 0; i < 26; i++) {
            if (count[i] > max1) {
                max2 = max1;
                max1 = count[i];
            } else if (count[i] > max2 && count[i] < max1) {
                max2 = count[i];
            }
        }

        char secondMaxChar = -1; 
        for (int i = 0; i < 26; i++) {
            if (count[i] == max2) {
                secondMaxChar = 'a' + i;
                break;
            }
        }

        if (max2 == 0 || secondMaxChar == -1) {
            printf("-1\n");
        } else {
            printf("%c\n", secondMaxChar);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}