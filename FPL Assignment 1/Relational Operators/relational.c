#include <stdio.h>  // Standard input-output library

int main() {
    int a = 10, b = 5;  // Declaring variables a and b

    // Checking if a is equal to b
    if (a == b) {
        printf("%d is equal to %d\n", a, b);  // If true, print equal
    } else {
        printf("%d is not equal to %d\n", a, b);  // If false, print not equal
    }

    // Checking if a is greater than b
    if (a > b) {
        printf("%d is greater than %d\n", a, b);  // If true, print greater
    }

    // Checking if a is less than b
    if (a < b) {
        printf("%d is less than %d\n", a, b);  // If true, print less
    }

    return 0;  // Return 0 to indicate successful execution
}
