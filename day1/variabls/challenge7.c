#include <stdio.h>

int main() {
    double x1, x2, x3;
    const double p1 = 2, p2 = 3, p3 = 5;

    printf("please enter the three numbers : ");
    scanf("%lf %lf %lf", &x1, &x2, &x3);

   
    double moyenne = (x1 * p1 + x2 * p2 + x3 * p3) / (p1 + p2 + p3);

    printf("the result is : %.2lf\n", moyenne);

    return 0;
}
