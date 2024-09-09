#include <stdio.h>

int main() {
    float kmh, ms;

    // Prompt the user for input
    printf("Please enter kilometers per hour here: ");
    scanf("%f", &kmh);

    // Convert km/h to m/s
    ms = kmh * 0.27778;

    // Display the result
    printf("The speed in meters per second is: %.2f\n", ms);

    return 0;
}
