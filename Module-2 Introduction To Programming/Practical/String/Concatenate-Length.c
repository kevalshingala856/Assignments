#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];


    printf("Enter the first string: ");
    gets(str1); 

    printf("Enter the second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("\nConcatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));
}