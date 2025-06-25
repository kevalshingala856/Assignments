#include <stdio.h>

void main() {
    int num = 10;
    int *ptr;  

    ptr = &num;

    printf("Original value of num: %d\n", num);

    *ptr = 20;

    printf("Modified value of num using pointer: %d\n", num);


}