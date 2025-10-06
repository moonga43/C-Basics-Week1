#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num;
    int result;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num); // Function call
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}

// Function definition
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;  // Multiply current number
    }
    return fact;  // Return the result
}

