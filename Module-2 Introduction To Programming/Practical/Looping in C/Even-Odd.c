#include <stdio.h>

void main() {
    int i, num;
    int even_count = 0, odd_count = 0;
    int even_sum = 0, odd_sum = 0;

    printf("Enter 10 numbers\n");

    for (i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count++;
            even_sum += num;
        } else {
            odd_count++;
            odd_sum += num;
        }
    }

    printf("TOTAL EVEN NUMBERS : %d\n", even_count);
    printf("TOTAL ODD NUMBERS: %d\n\n", odd_count);
    printf("SUM OF EVEN NUMBERS: %d\n", even_sum);
    printf("SUM OF ODD NUMBERS: %d\n", odd_sum);
}