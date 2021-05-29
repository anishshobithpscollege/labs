/*
 * Program to calculate area and circumference of circle.
 * @Date 27.05.2021
 */

#include <stdio.h>

#define PI 3.14

int main() {
    float radius, area, circumference;
    printf("Enter the area of the circle : ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("\nArea of the circle = %.2f", area);
    printf("\nCircumference of the circle = %.2f", circumference);

    return 0;
}