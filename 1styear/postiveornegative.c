/*
 * Program to find and largest number among two numbers.
 */

#include <stdio.h>

int main()
{
    int num = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is postive number", num);
    } 
    else 
    {   
        printf("%d is negative numer", num);
    }

    return 0;
}