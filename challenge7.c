#include <stdio.h>


//function kate9leb l7orof
void reverseString(char str[]) {
    int start = 0;
    int end = 0;

    while (str[end] != '\0') {
        end++;
    }
    end--;  

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
