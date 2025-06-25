#include <stdio.h>

void main() {
    int numbers[5];  
    int i;


    printf("ENTER 5 NUMBERS\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nREVERSE ORDER\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}
