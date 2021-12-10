/**
 * Experiment - 4
 * 
 * Date:  03-12-2021
 * 
 * @AUTHOR     - Anish Shobith P S
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru 
 * 
 * Question :
 * Design, Develop and Implement a Program in C for converting an Inix Expression to Postfix Expression. Program should support for both
 * parenthesized and free parenthesized expressions with the operators +,-,*,/,% (Remainder), ^(Power) and alphanumeric operands.
 */

#include <stdio.h>

void evaluate();
void push(char);
char pop();
int prec(char);

char infix[30], postfix[30], stack[30];
int top = -1;

void main() {
  printf("Enter a valid infix expression : ");
  scanf("%s", infix);
  evaluate();
  printf("The entered infix expression : %s", infix);
  printf("\nThe corresponding postfix expression : %s \n", postfix);
}

void evaluate() {
  int i = 0, j = 0;
  char symb, temp;
  push('#');
  for (i = 0; infix[i] != '\0'; i++) {
    symb = infix[i];
    switch (symb) {
    case '(':
      push(symb);
      break;
    case ')':
      temp = pop();
      while (temp != '(') {
        postfix[j] = temp;
        j++;
        temp = pop();
      }
      break;
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '^':
    case '$':
      while (prec(stack[top]) >= prec(symb)) {
        temp = pop();
        postfix[j] = temp;
        j++;
      }
      push(symb);
      break;
    default:
      postfix[j] = symb;
      j++;
      break;
    }
  }

  while (top > 0) {
    temp = pop();
    postfix[j] = temp;
    j++;
  }
  postfix[j] = '\0';
}

void push(char item) {
  top = top + 1;
  stack[top] = item;
}

char pop() {
  char item;
  item = stack[top];
  top = top - 1;
  return item;
}

int prec(char symb) {
  int p;
  switch (symb) {
  case '+':
  case '-':
    p = 1;
    break;
  case '*':
  case '/':
  case '%':
    p = 2;
    break;
  case '^':
  case '$':
    p = 3;
    break;
  case '(':
  case ')':
    p = 0;
    break;
  case '#':
    p = -1;
    break;

  }
  return p;
}
