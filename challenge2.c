#include <stdio.h>

int main() {
    float c, k;

    printf("Please enter the temperature in Celsius: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("The temperature in Kelvin is: %.2f\n", k);

    return 0;
}
