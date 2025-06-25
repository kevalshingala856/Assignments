#include <stdio.h>

void main() {
    int arr[100], n, i, j, temp, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ---------- Sort in Ascending Order ----------
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print Ascending Order
    printf("\nArray in Ascending Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // ---------- Sort in Descending Order ----------
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print Descending Order
    printf("\n\nArray in Descending Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // ---------- Find Maximum Element ----------
    max = arr[0]; 
    printf("\n\nMaximum Element = %d\n", max);
}