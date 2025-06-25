#include <stdio.h>

void main() {
    int a, b;

    printf("Enter A Value : ");
    scanf("%d", &a);

    printf("Enter B Value : ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    
    // Check for division by zero
    if (b != 0) {
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b); 
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(a && b): %d\n", a && b); // true if both are non-zero
    printf("(a || b): %d\n", a || b); // true if either is non-zero
    printf("!(a): %d\n", !a);         // true if a is zero

}
