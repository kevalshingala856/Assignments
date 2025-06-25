#include <stdio.h>

void main() {
    int i;

    
    //for loop
    printf("FOR LOOP:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }


    //while loop
    printf("\n\nWHILE LOOP:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    //do-while loop
    printf("\n\nDO WHILE:");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    printf("\n");
}
