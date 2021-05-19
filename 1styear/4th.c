/*
 * Input and output a floating point number.
 */

#include <stdio.h>

int main()
{
    float a;
    printf("Input a floating point number:");
    scanf("%f", &a);
    printf("\nFloating point %.2f", a);
    return 0;
}