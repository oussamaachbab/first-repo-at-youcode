#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Array of days of the week
    const char *daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Seed the random number generator and print a random day
    srand(time(NULL));
    printf("Random day of the week: %s\n", daysOfWeek[rand() % 7]);

    return 0;
}