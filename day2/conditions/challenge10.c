#include <stdio.h>

int main() {
    int age, years_of_contribution;
    double total_savings, bonus = 0.0;
    char plan[50];

    // Input age, years of contribution, and total savings
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez vos années de cotisation : ");
    scanf("%d", &years_of_contribution);

    printf("Entrez le montant total épargné (en euros) : ");
    scanf("%lf", &total_savings);

    // Calculate bonus for savings above 50,000 €
    if (total_savings > 50000) {
        bonus = ((int)((total_savings - 50000) / 10000)) * 0.05 * total_savings;
    }

    // Determine the retirement plan based on age, years of contribution, and total savings
    if (age >= 65 && years_of_contribution >= 30 && total_savings >= 100000) {
        sprintf(plan, "Plan complet avec pension élevée");
    } else if (age >= 65 && years_of_contribution >= 20 && total_savings >= 50000) {
        sprintf(plan, "Plan partiel avec pension moyenne");
    } else if (age < 65) {
        sprintf(plan, "Plan épargne non encore disponible");
    } else {
        sprintf(plan, "Pas de plan disponible selon les critères fournis");
    }

    // Display the retirement plan and any additional bonus
    printf("Le plan de retraite recommandé est : %s\n", plan);

    if (bonus > 0) {
        printf("Vous avez également un bonus de : %.2f euros\n", bonus);
    }

    return 0;
}