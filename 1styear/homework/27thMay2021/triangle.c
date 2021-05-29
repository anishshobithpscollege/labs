/*
 * Program to find area of triangle by 3 sides.
 * @Date 27-05-2021
 */

#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c,p,area;

    printf("Enter side 1 of the triangle : ");
    scanf("%f", &a);
    printf("\nEnter side 2 of the triangle : ");
    scanf("%f", &b);
    printf("\nEnter side 3 of the triangle : ");
    scanf("%f", &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("\nInvalid Input");
    } else {
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\nArea of the triangle is = %f", area);
    }

    return 0;
}