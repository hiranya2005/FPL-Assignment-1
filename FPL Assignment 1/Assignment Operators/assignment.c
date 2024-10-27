#include <stdio.h>  // Standard input-output library

int main() {
    int a = 10, b = 5;  // Declaring variables a and b

    // Assigning the value of b to a
    a = b;
    printf("After assignment, a = %d\n", a);

    // Addition assignment: Add b to a and store the result in a
    a += b;
    printf("After addition assignment, a = %d\n", a);

    // Subtraction assignment: Subtract b from a and store the result in a
    a -= b;
    printf("After subtraction assignment, a = %d\n", a);

    // Multiplication assignment: Multiply a by b and store the result in a
    a *= b;
    printf("After multiplication assignment, a = %d\n", a);

    // Division assignment: Divide a by b and store the result in a
    a /= b;
    printf("After division assignment, a = %d\n", a);

    return 0;  // Return 0 to indicate successful execution
}
