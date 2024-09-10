#include <stdio.h>
#include <math.h>

int main() {
    double radius;
    // Read the radius
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Compute and display the volume
    printf("Volume: %.2lf\n", (4.0 / 3.0) * M_PI * pow(radius, 3));

    return 0;
}
