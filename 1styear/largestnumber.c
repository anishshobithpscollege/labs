/*
 * Program to find and largest number among two numbers.
 */

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d is greater than %d", num1, num2);
    } 
    if (num1 == num2)
    {   
        printf("%d and %d are equal", num1, num2);
    } 
    if (num2 > num1)
    {
        printf("%d is greater than %d", num2, num1);
    }

    return 0;
}