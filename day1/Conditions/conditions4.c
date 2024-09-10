#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Entrer les coefficients
    printf("Entrez les coefficients a, b et c de l'équation ax^2 + bx + c = 0 :\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculer le discriminant
    discriminant = b * b - 4 * a * c;

    // Cas où l'équation a deux solutions réelles
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les deux racines sont réelles et distinctes : %.2f et %.2f\n", root1, root2);
    }
    // Cas où l'équation a une solution réelle double
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("L'équation a une racine réelle double : %.2f\n", root1);
    }
    // Cas où l'équation a deux solutions complexes
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Les solutions sont complexes : %.2f + %.2fi et %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}