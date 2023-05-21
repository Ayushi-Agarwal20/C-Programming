#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[1000000];
        scanf("%s", S);

        int n = strlen(S);

        // Find the first occurrence of a character that can be changed
        int i;
        for (i = n - 2; i >= 0; i--) {
            if (S[i] > S[i + 1])
                break;
        }

        if (i >= 0) {
            // Find the rightmost character smaller than S[i]
            int j;
            for (j = n - 1; j > i; j--) {
                if (S[j] < S[i])
                    break;
            }

            // Swap S[i] and S[j]
            char temp = S[i];
            S[i] = S[j];
            S[j] = temp;

            // Sort the substring after S[i]
            for (int k = i + 1; k < n; k++) {
                for (int l = i + 1; l < n - 1; l++) {
                    if (S[l] > S[l + 1]) {
                        char temp = S[l];
                        S[l] = S[l + 1];
                        S[l + 1] = temp;
                    }
                }
            }

            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}