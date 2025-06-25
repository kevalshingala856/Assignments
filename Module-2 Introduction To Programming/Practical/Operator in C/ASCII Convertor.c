#include <stdio.h>

void main() {
    int ascii_value;
    char character;

    //ASCII value to character
    printf("Enter an ASCII value (0-127): ");
    scanf("%d", &ascii_value);

    if (ascii_value >= 0 && ascii_value <= 127) {
        printf("Character for ASCII value %d is: %c\n", ascii_value, (char)ascii_value);
    } else {
        printf("Invalid ASCII value! Please enter a value between 0 and 127.\n");
    }

    //Character to ASCII value
    printf("\nEnter a character: ");
    scanf(" %c", &character); 

    printf("ASCII value of character '%c' is: %d\n", character, (int)character);
}