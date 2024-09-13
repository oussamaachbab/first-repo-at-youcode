#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int original[n], copied[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < n; i++) {
        copied[i] = original[i];
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", original[i]);
    }

    printf("Copied array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", copied[i]);
    }

    return 0;
}
