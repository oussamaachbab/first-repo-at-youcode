#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1;

        if (num <= 1) isPrime = 0;
        else if (num == 2 || num == 3) isPrime = 1;
        else if (num % 2 == 0 || num % 3 == 0) isPrime = 0;
        else {
            for (int j = 5; j * j <= num; j += 6) {
                if (num % j == 0 || num % (j + 2) == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d\n", num);
        }
    }

    return 0;
}
