#include <stdio.h>

int main() {
    int n, oldValue, newValue;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the value to replace: ");
    scanf("%d", &oldValue);
    printf("Enter the new value: ");
    scanf("%d", &newValue);

    for (int i = 0; i < n; i++) {
        if (array[i] == oldValue) {
            array[i] = newValue;
        }
    }

    printf("The updated array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
