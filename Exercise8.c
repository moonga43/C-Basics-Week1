#include <stdio.h>

// Function declaration
float findAverage(float num1, float num2, float num3);

int main() {
    float a, b, c, average;

    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calling the function
    average = findAverage(a, b, c);

    // Displaying the result
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}

// Function definition
float findAverage(float num1, float num2, float num3) {
    float avg;
    avg = (num1 + num2 + num3) / 3;
    return avg;
}
