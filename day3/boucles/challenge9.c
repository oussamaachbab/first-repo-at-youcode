#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;

    printf("Enter the base (positive integer): ");
    scanf("%d", &base);

    printf("Enter the exponent (non-negative integer): ");
    scanf("%d", &exponent);

    
    if (base < 0) {
        printf("Base must be a positive integer.\n");
        return 1; 
    }
    if (exponent < 0) {
        printf("Exponent must be a non-negative integer.\n");
        return 1; 
    }

    while (exponent > 0) {
        result *= base; 
        exponent--; 
    }

    printf("Result: %d\n", result);

    return 0;
}
