#include <stdio.h>
#define PI 3.14

void main() {
    float radius, area, circumference;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the Circle = %.2f\n", area);
    printf("Circumference of the Circle = %.2f\n", circumference);
}