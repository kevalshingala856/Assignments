#include <stdio.h>

int factorial(int n);

void main() {
    int num, result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d is: %d\n", num, result);


}

int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}
