# 2nd Expirement

## Aim
Develop a program to solve simple computational problems using arithmetic
expressions and use of each operator leading to simulation of a commercial calculator.

## Topic Learning Objective
Students will be able to apply switch construct to develop a simple
calculator to evaluate arithmetic expressions.

## Description
A calculator to solve simple computations should evaluate arithmetic expressions formed using
the operators `+`, `-`, `*`, `/` and `%`. In this program, each operator works on two operands. All the
operators except `%` can take both integer and floating point input. The `%` operator works only
on integer input.

## Algorithm

<pre><code class="has-line-data" data-line-start="1" data-line-end="37">Step 1: [Begin]
        Start
Step 2: [Input two operand values]
        Read op1, op2
Step 3: [Select the operation to be performed (addition, subtraction, multiplication, division, remainder)]
        Read choice of operator
Step 4: [Perform computation based on choice of operator]
        switch (choice)
            case 1:
                result &lt;= op1 + op2
                goto step 5
            case 2:
                result &lt;= op1 - op2
                goto step 5
            case 3: 
                result &lt;= op1 * op2
                goto step 5
            case 4: [ Check if the second operand is 0]
                if(op2 == 0)
                    print &quot;Division is not possible&quot;
                else
                    result &lt;= op1 / op2
                    goto step 5
            case 5: [ Check if the second operand is 0]
                if(op2 == 0)
                    print &quot;Modulus is not possible&quot;
                else
                    result &lt;= op1 % op2
                     goto step 5
            default: print &quot;Invalid Option&quot;
Step 5: [Print the result of selected operation]
        Output result
Step 6: [Terminate]
        Stop
</code></pre>

## Flowchart

[Click Here](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/flowchart.svg) to view the flowchart.
## Code

```c
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
```

[Click here](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/switch.c) for the code.

## Outputs

### Addition

![Addition](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/addition.png?raw=true)

### Subtraction

![Subtraction](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/subtraction.png?raw=true)

### Multiplication

![Mulitplication](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/multiplication.png?raw=true)

### Division

![Division](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/division.png?raw=true)

### Modulus

![Modulus](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/modulus.png?raw=true)

## Invalid Inputs

### Invalid Option

![Invalid Option](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/invalidinput.png?raw=true)

### Invalid Division (Division by 0)

![Invalid Division](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/invaliddivision.png?raw=true)

### Invalid Modulus (Modulus by 0)

![Invalid Modulus](https://github.com/Anish-Shobith/college/blob/main/1styear/lab%20sessions/2nd%20expirement/outputs/invalidmodulus.png?raw=true)

