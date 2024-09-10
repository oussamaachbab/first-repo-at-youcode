#include <stdio.h>

int main() {
    int num;

    // Read an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Print binary representation
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    // Print hexadecimal representation
    printf("Hexadecimal: %X\n", num);

    return 0;
}
