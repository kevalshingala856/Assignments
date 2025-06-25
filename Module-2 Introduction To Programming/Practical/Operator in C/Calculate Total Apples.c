#include <stdio.h>

 void main() {
    int students;

    printf("Enter the number of students: ");
    scanf("%d", &students);
    
    printf("Total apples required = %d\n", students * 5);
}