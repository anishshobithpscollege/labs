/**
 * Experiment - 6
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Design, Develop and Implement a menu driven Program in C for the following operations
 * on Circular QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
 * a. Insert an Element on to Circular QUEUE
 * b. Delete an Element from Circular QUEUE
 * c. Demonstrate Overflow and Underflow situations on Circular QUEUE
 * d. Display the status of Circular QUEUE
 * e. Exit
 * Support the program with appropriate functions for each of the above operations
 */

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int ch,front = 0,rear = 0;
char q[MAX],item;

void insertion() {
    if(front == (rear + 1) % MAX) {
        printf("\nCircular Queue Overflow");
        return;
    }
    rear = (rear + 1) % MAX;
    printf("\nEnter the character item to be inserted :");
    scanf("%s",&item);
    q[rear] = item;
}

void deletion() {
    if(front == rear) {
        printf("\nCircular Queue Underflow");
        return;
    }
    front = (front + 1) % MAX;
    printf("\nDeleted item is %c",q[front]);
}

void display() {
    int i, f = front,r = rear;
    if(front == rear) {
        printf("\nQueue is Empty");
    }
    else {
        printf("\nContents of Queue are :\n");
        for(i = (f + 1) % MAX;i != r;i = (i+1) % MAX) {
            printf("%c\t",q[i]);
        }
        printf("%c\t",q[i]);
    }
}

void main() {
    while(1) {
        printf("\n****MENU****\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch) {
            case 1 : insertion(); break;
            case 2 : deletion(); break;
            case 3 : display(); break;
            case 4 : exit(0); break;
            default : printf("\nInvalid choice"); break;
            }
    }
}
