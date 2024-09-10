#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;

    // Read a four-digit integer
    printf("Enter a four-digit integer: ");
    scanf("%d", &num);

    // Extract digits
    d1 = num / 1000;          // First digit
    d2 = (num / 100) % 10;    // Second digit
    d3 = (num / 10) % 10;     // Third digit
    d4 = num % 10;            // Fourth digit

    // Print digits in reverse order
    printf("Reversed number: %d%d%d%d\n", d4, d3, d2, d1);

    return 0;
}
