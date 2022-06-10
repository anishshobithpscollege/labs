/**
 * Experiment - 5a
 *
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 *
 * Question :
 * Design, Develop and Implement a Program in C for the follwing Stack Applications
 *  a. Evalution of Suffix experssion with single digit operands and operators: +,-,*,/,%,^
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

double compute(char symbol, double op1, double op2)
{
    switch(symbol)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    case '%':
        return (double)((int)(op1) % (int)(op2));
    case '^':
        return pow(op1, op2);
    default:
        return 0;
    }
}

void main()
{
    double s[20], op1, op2;
    int top = -1, i;
    char postfix[20], symbol;

    printf("\nEnter the prefix experssion : ");
    gets(postfix);

    for (i = 0; i < strlen(postfix); i++)
    {
        symbol = postfix[i];
        if (isdigit(symbol))
            s[++top] = symbol - '0';
        else
        {
            op2 = s[top--];
            op1 = s[top--];
            s[++top] = compute(symbol, op1, op2);
        }
    }

    printf("\n The result is : %f\n", s[top]);
}