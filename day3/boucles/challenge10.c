#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    printf("Enter the length of the password: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Password length must be a positive integer.\n");
        return 1; 
    }

    const char all_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int all_chars_size = sizeof(all_chars) - 1; 
    srand(time(NULL));

    printf("Generated password: ");
    for (int i = 0; i < n; i++) {
        char random_char = all_chars[rand() % all_chars_size];
        printf("%c", random_char);
    }
    printf("\n");

    return 0;
}
