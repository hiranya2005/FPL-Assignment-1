 #include <stdio.h>  // Standard input-output library

int main() {
    int a = 10, b = 20;  // Declaring variables a and b

    // Ternary operator to find the larger of two numbers
    int max = (a > b) ? a : b;  // If a is greater than b, assign a to max; otherwise assign b
    printf("The larger number between %d and %d is: %d\n", a, b, max);

    return 0;  // Return 0 to indicate successful execution
}
