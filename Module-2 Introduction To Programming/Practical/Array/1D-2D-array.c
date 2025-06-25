#include <stdio.h>

void main() {
    // int arr[5], i;
    // printf("Enter 5 integers for 1D array:\n");

    // for (i = 0; i < 5; i++) {
    //     printf("Element %d: ", i + 1);
    //     scanf("%d", &arr[i]);
    // }

    // printf("\n1D Array Elements:\n");
    // for (i = 0; i < 5; i++) {
    //     printf("%d ", arr[i]);
    // }

    // -------- 2D Array (3x3 Matrix) --------
    int matrix[3][3], row, col, sum = 0;
    printf("\n\nEnter elements for 3x3 matrix:\n");

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("Element [%d][%d]: ", row, col);
            scanf("%d", &matrix[row][col]);
            sum += matrix[row][col]; 
        }
    }

    printf("\n3x3 Matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in 3x3 matrix: %d\n", sum);
}