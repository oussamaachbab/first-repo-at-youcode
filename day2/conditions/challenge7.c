#include <stdio.h>

int main() {
    double revenu, deductions, taxe_brute, taxe_net;
    int statut_fiscal;

    printf("Entrez votre revenu annuel (en euros) : ");
    scanf("%lf", &revenu);

    printf("Entrez votre statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &statut_fiscal);

    
    if (statut_fiscal == 1) {  
        deductions = 1000;
    } else if (statut_fiscal == 2) {  
        deductions = 2000;
    } else if (statut_fiscal == 3) {  
        deductions = 3000;
    } else {
        printf("Statut fiscal invalide.\n");
        return 1;  
    }

  
    revenu -= deductions;

   
    if (revenu < 0) {
        revenu = 0;
    }

   
    if (revenu <= 20000) {
        taxe_brute = revenu * 0.05;
    } else if (revenu <= 50000) {
        taxe_brute = 20000 * 0.05 + (revenu - 20000) * 0.10;
    } else {
        taxe_brute = 20000 * 0.05 + 30000 * 0.10 + (revenu - 50000) * 0.20;
    }

   
    printf("Les impôts à payer sont : %.2f euros\n", taxe_brute);

    return 0;
}