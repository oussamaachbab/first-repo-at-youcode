#include <stdio.h>
#include <string.h> // For strcmp

int main() {
    int basePrime = 1000;
    int age, accidentNumber;
    char carType[30]; // Use a fixed size array to store the input
    float base; // Use float for base to handle fractional multipliers

    // Read age
    printf("Please enter your age here: ");
    scanf("%d", &age);

    // Consume the newline character left by scanf
    while (getchar() != '\n'); // Clear the input buffer

    // Read car type
    printf("Please enter the car type in lowercase here: ");
    fgets(carType, sizeof(carType), stdin);

    // Remove trailing newline character if present
    size_t length = strlen(carType);
    if (length > 0 && carType[length - 1] == '\n') {
        carType[length - 1] = '\0';
    }

    // Read the number of accidents
    printf("Please enter the number of accidents you have been in the last five years: ");
    scanf("%d", &accidentNumber);

    // Calculate base based on age
    if (age < 25) {
        base = basePrime * 1.5;
    } else if (age >= 25 && age < 65) {
        base = basePrime;
    } else {
        base = basePrime * 1.2;
    }

    // Adjust base based on car type
    if (strcmp(carType, "sportive") == 0) {
        base = base * 2;
    } else if (strcmp(carType, "utilitair") == 0) {
        base = base * 1.2;
    } else {
        base = base * 1.1;
    }

    // Adjust base based on the number of accidents
    if (accidentNumber > 1) {
        base = base * 1.3;
    }

    // Print results
    printf("Age: %d\n", age);
    printf("Car Type: %s\n", carType);
    printf("Number of Accidents: %d\n", accidentNumber);
    printf("Your total is: %.2f\n", base); // Use %.2f to format floating-point numbers

    return 0;
}
