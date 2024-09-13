#include <stdio.h>

int main() {
    int n, sum = 0;

  
    printf("Enter how many numbers you want to enter in the next step : ");
    scanf("%d", &n);
    int table[n];

   
    printf("Enter %d the numbers :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &table[i]);
        sum += table[i];  
    }

   
    printf("The sum of the elements is: %d\n", sum);

    return 0;
}
