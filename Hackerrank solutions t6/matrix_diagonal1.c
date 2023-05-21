#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);  // Row size and column size

    if (m != n) {
        printf("Not square matrix.\n");
        return 0;
    }

    int matrix[m][n];

    // Read the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the diagonal elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                for (int space = 0; space < 2 * i; space++) {
                    printf(" ");
                }
                printf("%d\n", matrix[i][j]);
            }
        }
    }

    return 0;
}