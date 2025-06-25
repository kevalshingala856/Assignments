#include <stdio.h>

void main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;  
        i++;           
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

}