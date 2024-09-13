#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int a = 0, b = 1, next;

        printf("Fibonacci sequence:\n");

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                printf("%d ", a);
            } else if (i == 1) {
                printf("%d ", b);
            } else {
                next = a + b; 
                a = b;    
                b = next;     
                printf("%d ", next);
            }
        }
        printf("\n"); 
    }

    return 0;
}
