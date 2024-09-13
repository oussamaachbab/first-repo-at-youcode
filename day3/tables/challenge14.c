#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = sum / n;

    printf("The average of the elements is: %.2f\n", average);

    return 0;
}
