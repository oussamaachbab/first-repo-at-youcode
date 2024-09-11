#include <stdio.h>

int main() {
    int age, medical_history, coverage_type;
    char plan[30];

    // Input age, medical history, and type of coverage
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre historique médical (0 pour aucun, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d", &medical_history);

    printf("Entrez le type de couverture (1 pour de base, 2 pour étendue) : ");
    scanf("%d", &coverage_type);

    // Determine the health plan based on age and medical history
    if (age < 30) {
        sprintf(plan, "Plan de base");
    } else if (age >= 30 && medical_history == 0) {
        sprintf(plan, "Plan de base");
    } else if (age >= 30 && medical_history >= 1) {
        sprintf(plan, "Plan étendu");
    }

    // Add extra coverage if there is a major medical problem
    if (medical_history == 2) {
        printf("Vous avez droit à une couverture supplémentaire pour des problèmes majeurs.\n");
    }

    // Display the health plan
    printf("Le plan de santé recommandé est : %s\n", plan);

    return 0;
}