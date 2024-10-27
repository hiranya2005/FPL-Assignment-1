#include <stdio.h>  // Standard input-output library

int main() {
    int a = 5, b = 3, result;  // Declaring variables a, b, and result

    // Bitwise AND: Performs AND operation bit by bit
    result = a & b;
    printf("Bitwise AND of %d and %d is: %d\n", a, b, result);

    // Bitwise OR: Performs OR operation bit by bit
    result = a | b;
    printf("Bitwise OR of %d and %d is: %d\n", a, b, result);

    // Bitwise XOR: Performs XOR operation bit by bit
    result = a ^ b;
    printf("Bitwise XOR of %d and %d is: %d\n", a, b, result);

    return 0;  // Return 0 to indicate successful execution
}
