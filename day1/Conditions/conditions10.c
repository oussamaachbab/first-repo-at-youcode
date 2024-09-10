#include <stdio.h>

int main() {
    int days, month, years;

    
    printf("Please enter the date (DD MM YY): ");
    scanf("%d %d %d", &days, &month, &years);

    switch (month) {
        case 1:
            printf("%d/January/%d\n", days, years);
            break;
        case 2:
            printf("%d/February/%d\n", days, years);
            break;
        case 3:
            printf("%d/March/%d\n", days, years);
            break;
        case 4:
            printf("%d/April/%d\n", days, years);
            break;
        case 5:
            printf("%d/May/%d\n", days, years);
            break;
        case 6:
            printf("%d/June/%d\n", days, years);
            break;
        case 7:
            printf("%d/July/%d\n", days, years);
            break;
        case 8:
            printf("%d/August/%d\n", days, years);
            break;
        case 9:
            printf("%d/September/%d\n", days, years);
            break;
        case 10:
            printf("%d/October/%d\n", days, years);
            break;
        case 11:
            printf("%d/November/%d\n", days, years);
            break;
        case 12:
            printf("%d/December/%d\n", days, years);
            break;
        default:
            printf("The date you entered is invalid.\n");
            break;
    }

    return 0;
}
