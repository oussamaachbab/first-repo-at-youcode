#include <stdio.h>

int main() {
    int n;

    
    printf("Enter a number : ");
    scanf("%d", &n);

    int table[n];


    printf("Enter %d nambers or somthing else:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &table[i]);
    }

    
    printf("you have entred :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", table[i]);
    }

    return 0;
}
