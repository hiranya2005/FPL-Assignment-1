#include <stdio.h>  // Standard input-output library

int main() {
    int a = 10, b = 5, c = 0;  // Declaring variables a, b, and c

    // Logical AND: Both conditions must be true to execute the block
    if (a > b && b > c) {
        printf("Both conditions are true\n");  // If both are true
    } else {
        printf("One or both conditions are false\n");  // If either is false
    }

    // Logical OR: At least one condition must be true to execute the block
    if (a > b || b < c) {
        printf("At least one condition is true\n");  // If one or both are true
    } else {
        printf("Both conditions are false\n");  // If both are false
    }

    // Logical NOT: Negates the condition
    if (!(a == b)) {
        printf("%d is not equal to %d\n", a, b);  // Executes when a is not equal to b
    }

    return 0;  // Return 0 to indicate successful execution
}
