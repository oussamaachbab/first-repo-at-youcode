#include <stdio.h>

int main() {
    int n, factor;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the multiplication factor: ");
    scanf("%d", &factor);

    printf("The array after multiplying each element by %d is:\n", factor);
    for (int i = 0; i < n; i++) {
        int result = array[i] * factor;
        printf("%d\n", result);
    }

    return 0;
}
