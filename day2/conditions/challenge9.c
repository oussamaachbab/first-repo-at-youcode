#include <stdio.h>

int main() {
    double base_salary, hourly_rate, overtime_hours, overtime_pay, total_salary, bonus;
    int position_type;

    // Input base salary, overtime hours, and position type
    printf("Entrez le salaire de base (en euros) : ");
    scanf("%lf", &base_salary);

    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%lf", &overtime_hours);

    printf("Entrez le type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &position_type);

    // Calculate hourly rate based on 40 hours per week (assuming 160 hours per month)
    hourly_rate = base_salary / 160;

    // Calculate overtime pay (1.5 times the hourly rate)
    overtime_pay = overtime_hours * hourly_rate * 1.5;

    // Calculate bonus based on position type
    if (position_type == 1) {  // Junior
        bonus = base_salary * 0.10;  // 10% bonus for junior position
    } else if (position_type == 2) {  // Senior
        bonus = base_salary * 0.20;  // 20% bonus for senior position
    } else {
        printf("Type de poste invalide.\n");
        return 1;  // Exit the program in case of invalid input
    }

    // Calculate total salary
    total_salary = base_salary + overtime_pay + bonus;

    // Display the total salary
    printf("Le salaire total est : %.2f euros\n", total_salary);

    return 0;
}