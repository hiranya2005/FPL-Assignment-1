#include <stdio.h>  // Standard input-output library

int main() {
    int a = 10, b = 5, result;  // Declaring variables a, b, and result

    // Performing addition and displaying the result
    result = a + b;
    printf("Addition of %d and %d is: %d\n", a, b, result);

    // Performing subtraction and displaying the result
    result = a - b;
    printf("Subtraction of %d and %d is: %d\n", a, b, result);

    // Performing multiplication and displaying the result
    result = a * b;
    printf("Multiplication of %d and %d is: %d\n", a, b, result);

    // Performing division and displaying the result
    result = a / b;
    printf("Division of %d by %d is: %d\n", a, b, result);

    // Performing modulus (remainder) operation and displaying the result
    result = a % b;
    printf("Remainder when %d is divided by %d is: %d\n", a, b, result);

    return 0;  // Return 0 to indicate successful execution
}
