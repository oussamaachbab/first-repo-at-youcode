#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, z1, x2, y2, z2;

    
    printf("please enter  (x1 y1 z1 x2 y2 z2) : ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &z1, &x2, &y2, &z2);

    
    printf("the result is : %.2lf\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2)));

    return 0;
}
