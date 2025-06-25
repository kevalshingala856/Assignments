#include <stdio.h>

void main() {
    int i,j;

    printf("BREAK STATEMENT\n");

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Stop when i is 5
        }
        printf("%d ", i);
    }

    printf("\n\nCONTINUE STATEMENT\n");

    for (j = 1; j <= 5; j++) {
        if (j == 3) {
            continue; // Skip when j is 3
        }
        printf("%d ", j);
    }
}
