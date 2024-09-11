#include <stdio.h>

int main() {
  
    float income;
    int creditScore;
    int loanDuration;

   
    printf("please enter your annual income in euros: ");
    scanf("%f", &income);

    printf("please Enter credit score (out of 1000): ");
    scanf("%d", &creditScore);

    printf("please enter the loan duration : ");
    scanf("%d", &loanDuration);


    if (income >= 30000 && creditScore >= 700 && loanDuration <= 10) {
        printf("Eligible for the loan.\n");
    } else if (income >= 30000 && creditScore >= 650 && loanDuration <= 15) {
        printf("Eligible for the loan with conditions.\n");
    } else {
        printf("Not eligible for the loan.\n");
    }

    return 0;
}
