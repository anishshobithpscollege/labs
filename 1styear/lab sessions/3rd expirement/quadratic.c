/**
 * Program to calculate the roots.
 * Formula used:
 *      - b ± √(b² - 4ac)
 * x = ___________________
 *            2a.
 * Logic :
 * 1) If discriminate = 0 , print the roots are equal and their value.
 * 2) If discriminate > 0 , print the roots are real roots and their value.
 * 3) If discriminate < 0 , the roots are imaginary roots.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, disc, r1, r2, realPart, imagPart;

 printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = pow(b, 2) - (4 * a * c);

    if (disc == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are equal!\nRoot1 = Root2 = %.2f\n", r1);

    } else if (disc > 0) 
    {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and distinct!\nRoot1 = %.2f\nRoot2 = %.2f\n", r1, r2);
    } else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / (2 * a);
        printf("Roots are imaginary roots!\nRoot1 = %.2f+%.2fi\nRoot2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}   

