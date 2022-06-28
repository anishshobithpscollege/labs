/**
 * Experiment - 1b
 * @USN        - 4SO20CS012
 * @SUBJECT    - Design and Analysis of Algorithms Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Write a Java program to implement the Stack using arrays. Write a Push(), Pop(), and Display()
 * methods to demonstrate its working.
 */

package org.example;

import java.util.Scanner;

class Stack {
    int top;
    int[] item;

    Scanner sc;

    Stack(int size) {
        top = -1;
        item = new int[size];
        sc = new Scanner(System.in);
    }

    void push() {
        if (top == item.length - 1)
            System.out.print("Stack Overflow");
        else {
            System.out.print("\nEnter item to be pushed : ");
            int data;
            data = sc.nextInt();
            item[++top] = data;
        }
    }

    void pop() {
        if (top < 0) {
            System.out.print("\nStack Underflow");
        }
        else {
            System.out.printf("Popped item is : %d", item[top]);
            top--;
        }
    }

    void display() {
        if (top == -1)
            System.out.print("Stack is empty");
        else {
            System.out.print("Stack Items are :\n");
            for (int i = 0; i <= top; i++)
                System.out.printf("%d ", item[i]);
            System.out.print("<-top");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Stack stk = new Stack(3);
        boolean rerun = true;
        int choice;
        Scanner sc = new Scanner(System.in);

        do {
            System.out.print("\nMenu:\n1.Push\n2.Pop\n3.Display\n4.Exit");
            System.out.print("\nEnter your choice : ");
            choice = sc.nextInt();

            switch (choice) {
                case 1 -> stk.push();
                case 2 -> stk.pop();
                case 3 -> stk.display();
                case 4 -> rerun = false;
                default -> System.out.print("Invalid input");
            }
        } while (rerun);
    }
}
