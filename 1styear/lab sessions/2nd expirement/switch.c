/**
 * Program to solve simple computation problems using arithmetic expression
 * and use of each operator leading to simulation of a commerical calculator. 
 */

#include <stdio.h>

int main()
{   
    // Declare variables
    int option;
    float op1, op2, result;

    // Enter values for operand 1 and operand 2
    printf("Enter value for a and b : ");
    scanf("%f %f", &op1, &op2);

    printf("MENU (Enter the number)\n\t1: Addition\n\t2: Subtraction\n\t3: Multiplication\n\t4: Division\n\t5: Modulus\n");
    // Enter value for Arithemetic Operation
    printf("\nChoose Arithemetic Operation : ");
    scanf("%d", &option);

    switch (option)
    {

    case 1:
        // Addition
        result = op1 + op2;
        break;
    
    case 2:
        // Subraction
        result = op1 - op2;
        break;
    
    case 3:
        // Multiplication
        result = op1 * op2;
        break;

    case 4:
        // Divison by 0 is not possible, hence throw a error message and terminate the program.
        if (op2 == 0)
        {
            printf("\nDivison is not possible");
            return 0;
        }
        // Divison
        result = op1 / op2;
        break;
    
    case 5:
        // Modulus of 0, is not possible, hence throw a error message and terminate the program.
        if (op2 == 0)
        {
            printf("\nModulus is not possible");
            return 0;
        }
        /**
         * Modulus
         * We have to cast the type of integer because % doesn't work on floating values
         */
        result = (int)op1 % (int)op2;
        break;

    default:
        // If the option is invalid, throw a error message and terminate the program.
        printf("\nInvalid option");
        return 0;
        break;
    }
    // Print the result and gonna round of to two decimals.
    printf("Result = %.2f", result);
    return 0;

}