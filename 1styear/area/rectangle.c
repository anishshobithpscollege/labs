/*
 * Program to calculate area of rectangle.
 */

#include <stdio.h>

int main() {
    float length, breadth, area;
    printf("Enter the length of the rectangle :");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle :");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area of the rectangle : %.2f", area);

    return 0;
}