#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Odd elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 != 0) { 
            printf("%d\n", array[i]);
        }
    }

    return 0;
}
