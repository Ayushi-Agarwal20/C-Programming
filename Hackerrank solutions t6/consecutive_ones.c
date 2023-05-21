#include <stdio.h>

int countConsecutiveOnes(int n) {
    int count = 0;
    int maxCount = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            if (count > maxCount)
                maxCount = count;
        } else {
            count = 0;
        }
        n /= 2;
    }

    return maxCount;
}

int main() {
    int n;
    scanf("%d", &n);

    int maxConsecutiveOnes = countConsecutiveOnes(n);

    printf("%d\n", maxConsecutiveOnes);

    return 0;
}