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

    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }

    printf("The reversed array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

