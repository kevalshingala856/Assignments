#include <stdio.h>

void main() {
    float side, surface_area_cube, area_square;
    float base, height, area_triangle;

    // --- Area of Square ---
    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area_square = side * side;
    printf("Area of Square = %.2f\n", area_square);

    // --- Surface Area of Cube ---
    surface_area_cube = 6 * side * side;
    printf("Surface Area of Cube = %.2f\n", surface_area_cube);

    // --- Area of Triangle ---
    printf("\nEnter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area_triangle = 0.5 * base * height;
    printf("Area of Triangle = %.2f\n", area_triangle);
}