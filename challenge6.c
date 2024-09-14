#include <stdio.h>

//create a function

int function(int n) {//hna kandiro condition o kan7asbo dalaa d fibonacci
    if (n <= 1)
        return n;
    else
        return function(n - 1) + function(n - 2);
}

int main() {
    int n;

    printf("Enter the Fibonacci term to calculate: ");
    scanf("%d", &n);

    // print the result
    printf("The %d-th Fibonacci number is: %d\n", n, function(n));

    return 0;
}