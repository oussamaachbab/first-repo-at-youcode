#include <stdio.h>

int main() {
    float average;

    // Prompt user to enter the average grade
    printf("Enter the average grade: ");
    scanf("%f", &average);

    // Determine and display the mention based on the average grade
    if (average < 10) 
        printf("Mention: fail\n");
     else if (average >= 10 && average < 12) 
        printf("Mention: not bad\n");
     else if (average >= 12 && average < 14) 
        printf("Mention: Fairly good\n");
     else if (average >= 14 && average < 16) 
        printf("Mention: Good\n");
     else 
        printf("Mention: Excellent\n");
    

    return 0;
}
