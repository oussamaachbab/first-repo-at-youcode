#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int array1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int array2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = array1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = array2[i];
    }

    printf("The merged array is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d\n", merged[i]);
    }

    return 0;
}
