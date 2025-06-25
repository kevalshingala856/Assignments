#include <stdio.h>

void main() {
    FILE *fp;
    char str[100];

    fp = fopen("myfile.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
    }

    printf("Enter a string to write to the file: ");
    gets(str);

    fprintf(fp, "%s", str); 
    fclose(fp);            

    fp = fopen("myfile.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
    }

    printf("\nContents of the file:\n");

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
}