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
        char A[1000000];

        scanf("%s %s", S, A);

        int n = strlen(S);
        int m = strlen(A);

        int found = 0;

        for (int i = 0; i <= n - m; i++) {
            int j;
            for (j = 0; j < m; j++) {
                if (S[i + j] != A[j])
                    break;
            }

            if (j == m) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("Yes\n");
        else
            printf("No\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}