/*
 * Program to calculate area of circle.
 */

#include <stdio.h>

#define PI 3.14

int main() {
    float radius, area;
    printf("Enter the area of the circle : ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle = %.2f", area);

    return 0;
}