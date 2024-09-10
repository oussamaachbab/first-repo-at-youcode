#include <stdio.h>

int main() {

    float a, b;


    printf("please enter the first number : ");
    scanf("%f", &a);

    printf("please enter the second number : ");
    scanf("%f", &b);


    float somme = a + b;
    float difference = a - b;
    float produit = a * b;
    float division = a / b;
    printf("a / b = %.2f\n", division);
    printf("a + b = %.2f\n", somme);
    printf("a - b = %.2f\n", difference);
    printf("a * b = %.2f\n", produit);

    return 0;
}
