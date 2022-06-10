/**
 * Experiment - 3
 *
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data STRuctures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 *
 * Question :
 * Design, Develop and Implement a menu driven Program in C for the following operations on
 * STACK  of Integers (Array Implementation) of Stack with maximum size MAX)
 *  a. Push an Element on to Stack
 *  b. Pop an Element from Stack
 *  c. Demonstrate how Stack can be used to check Palindrome
 *  d. Demonstrate Overflow and Underflow sitations on Stack
 *  e. Display the status of Stack
 *  f. Exit
 * Support the program with appropiate functions for each of the above operations.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX], top = - 1;

#define MAX_S MAX - 1

void push (int item)
{
    if (top == MAX_S)
        printf("\n Stack is overflow.");
    else
    {
        stack[++top] = item;
    }
}

int pop()
{
    int res;

    if (top == -1)
        printf("\n Stack is underflow\n");
    else
    {
        res = stack[top];
        top = top - 1;
        printf ("\n Popped element is %d", res);
    }
    return res;
}

void palindrome()
{
    int i, count = 0;
    for (i = 0; i < top; i++)
    {
        if (stack[i] == stack[top - i])
            count++;
    }

    if (top == count)
        printf("Stack contents are palindrome.\n");
    else
        printf("Stack contents are not palindrome.\n");
}

void display()
{
    int i;
    if (top == -1)
        printf("\n Stack is empty");
    else
    {
        printf("\n The stack contents are : \n");
        for (i = top; i >= 0; i--)
            printf("%d\t", stack[i]);
    }
}

void main()
{
    int choice, ele;

    while (1)
    {
        printf("\n*****MENU*****\n");
        printf("1. Push\n2. Pop\n3. Palindrome\n4. Display\n5. Exit");
        printf("\n Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed : ");
            scanf("%d", &ele);
            push(ele);
            break;
        case 2:
            pop();
            break;
        case 3:
            palindrome();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid option");
            break;
        }
    }
}
