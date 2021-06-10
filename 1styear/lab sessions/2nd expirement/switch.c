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

    printf("MENU (Enter the number)\n\t1: Addition\n\t2: Subtraction\n\t3: Multiplication\n\t4: Division\n\t5: Modulus\n");
    printf("\nChoose Arithemetic Operation : ");
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
        if (b == 0)
        {
            printf("\nModulus is not possible");
            return 0;
        }
        result = (int)a % (int)b;
        break;

    default:
        printf("\nInvalid option");
        return 0;
        break;
    }

    printf("Result = %.2f", result);
    return 0;

}