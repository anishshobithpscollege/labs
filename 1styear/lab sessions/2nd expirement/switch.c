/**
 * Program to solve simple computation problems using arithmetic expression
 * and use of each operator leading to simulation of a commerical calculator. 
 */

#include <stdio.h>

int main()
{
    int option;
    float a, b, result;

    printf("Enter value for a and b : ");
    scanf("%f %f", &a, &b);

    printf("\nChoose Arithmetic operation\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Modulus\n");
    scanf("%d", &option);

    switch (option)
    {

    case 1:
        result = a + b;
        break;
    
    case 2:
        result = a - b;
        break;
    
    case 3:
        result = a * b;
        break;

    case 4:
        if (b == 0)
        {
            printf("\nDivison is not possible");
            return 0;
        }
        result = a / b;
        break;
    
    case 5:
        result = (int)(a) % (int)(b);
        break;

    default:
        printf("\nInvalid option");
        return 0;
        break;
    }

    printf("Result = %.2f", result);
    return 0;

}