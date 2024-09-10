#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    
    printf("enter the three numbers : ");
    scanf("%lf %lf %lf", &a, &b, &c);

 
    printf("the geo result is : %.2lf\n", pow(a * b * c, 1.0/3.0));

    return 0;
}
