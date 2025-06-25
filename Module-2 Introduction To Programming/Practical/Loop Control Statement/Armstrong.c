#include <stdio.h>
#include <math.h>

int main() {
//Using For Loop
    int num, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        result += remainder * remainder * remainder;  
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);


//Using While Loop
    // int num, original, remainder, result = 0;

    // printf("Enter a number: ");
    // scanf("%d", &num);

    // original = num;

    // while (num != 0) {
    //     remainder = num % 10;
    //     result += remainder * remainder * remainder;
    //     num /= 10;
    // }

    // if (result == original)
    //     printf("%d is an Armstrong number.\n", original);
    // else
    //     printf("%d is not an Armstrong number.\n", original);
}