#include <stdio.h>

int main() {
    int n, target, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (array[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The element %d is present in the array.\n", target);
    } else {
        printf("The element %d is not present in the array.\n", target);
    }

    return 0;
}
