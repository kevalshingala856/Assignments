#include <stdio.h>

void main() {
    // Declaring and initializing a constant
    const float PI = 3.14159;

    // Declaring variables of different data types
    int age = 20;
    char grade = 'A';
    float height = 5.6;

    // Displaying the values using printf
    printf("----- Student Info -----\n");
    printf("Age: %d\n", age);           
    printf("Grade: %c\n", grade);       
    printf("Height: %.1f feet\n", height); 

    // Displaying the constant value
    printf("Value of PI (constant): %.5f\n", PI);
}