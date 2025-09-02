#include <stdio.h>

int main(void) {
    int a, b, sum;   // Declare three integer variables

    // Ask user to enter the first number
    printf("Enter first integer: ");
    scanf("%d", &a);  // Read input and store in variable a

    // Ask user to enter the second number
    printf("Enter second integer: ");
    scanf("%d", &b);  // Read input and store in variable b

    // Perform addition
    sum = a + b;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;  // Exit program
}