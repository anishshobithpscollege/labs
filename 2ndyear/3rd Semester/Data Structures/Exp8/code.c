/**
 * Experiment - 8
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Design, Develop and Implement a menu driven Program in C for the following
 * operations on Doubly Linked List (DLL) of Employee Data with the fields: SSN, Name, Dept,
 * Designation, Sal, PhNo
 * a. Create a DLL of N Employees Data by using end insertion.
 * b. Display the status of DLL and count the number of nodes in it
 * c. Perform Insertion and Deletion at End of DLL
 * d. Perform Insertion and Deletion at Front of DLL
 * e. Demonstrate how this DLL can be used as Double Ended Queue
 * f. Exit
 */

#include<stdio.h>
#include<stdlib.h>

struct node {
    char ssn[10],name[20],dept[10],desig[10],phno[12];
    int sal;
    struct node *llink;
    struct node *rlink;
};

typedef struct node *NODE;
NODE temp,FIRST = NULL,END = NULL;

NODE getnode() {
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    return x;
}

void read() {
    temp = getnode();
    temp->llink = NULL;
    temp->rlink = NULL;
    printf("\nEnter SSN :");
    scanf("%s",temp->ssn);
    printf("\nEnter Name :");
    scanf("%s",temp->name);
    printf("\nEnter Dept. :");
    scanf("%s",temp->dept);
    printf("\nEnter Desig. :");
    scanf("%s",temp->desig);
    printf("\nEnter Ph.No. :");
    scanf("%s",temp->phno);
    printf("\nEnter Salary :");
    scanf("%d",&temp->sal);
    return;
}

void create_dll(){
    int n,i = 1;
    printf("\nEnter the number of the employees\n");
    scanf("%d",&n);
    while(i <= n) {
        printf("\nEnter the details of employee%d",i++);
        read();
        if(FIRST == NULL) {
            FIRST = temp;
            END = temp;
        }
        else {
            END->rlink = temp;
            temp->llink = END;
            END = temp;
        }

    }
}

void display_count() {
    temp = FIRST;
    int count = 1;
    printf("\nEmployee details :\n ");
    if(FIRST == NULL) {
        printf("\nEmployee details are null and count is 0");
    }
    else {
        while(temp != END) {
            count++;
            printf("\n%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desig,temp->phno,temp->sal);
            temp = temp->rlink;
        }
        count++;
        printf("\n%s\t%s\t%s\t%s\t%s\t%d\n",temp->ssn,temp->name,temp->dept,temp->desig,temp->phno,temp->sal);
        printf("\nEmployee count is %d",count-1);
    }
    return;
}

void insert_front() {
    printf("\nEnter the details of new employee :\n");
    read();
    if(FIRST == NULL) {
            FIRST = temp;
    }
    else {
        FIRST->llink = temp;
        temp->rlink = FIRST;
        FIRST = temp;
    }
    return;
}

void insert_end() {
    printf("\nEnter the details of new employee :\n");
    read();
    if(FIRST == NULL) {
        FIRST = temp;
        END = temp;
    }
    else {
        END->rlink = temp;
        temp->llink = END;
        END = temp;
    }
    return;
}

void delete_end() {
    temp = END;
    if(FIRST == NULL) {
        printf("\nList is Empty");
    }
    else if(FIRST == END) {
        printf("\nDeleted element is %s",temp->ssn);
        FIRST = NULL;
        END = NULL;
        free(temp);
    }
    else {
        printf("\nDeleted element is %s",temp->ssn);
        END = END->llink;
        END->rlink = NULL;
        free(temp);
    }
    return;
}

void delete_front() {
    temp = FIRST;
    if(FIRST == NULL) {
        printf("\nList is Empty");
    }
    else if(FIRST == END) {
        printf("\nDeleted element is %s",temp->ssn);
        FIRST = NULL;
        END = NULL;
        free(temp);
    }
    else {
        printf("\nDeleted element is %s",temp->ssn);
        FIRST = FIRST->rlink;
        FIRST->llink = NULL;
        free(temp);
    }
    return;
}

void main() {
    int choice;
    while(1) {
        printf("\n\n****MENU****");
        printf("\n1.Create-DLL\n2.Display-DLL\n3.Insertion-Front\n4.Insertion-End\n5.Deletion-Front\n6.Deletion-End\n7.Exit\n");
        printf(".................\n");
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : create_dll(); break;
            case 2 : display_count(); break;
            case 3 : insert_front(); break;
            case 4 : insert_end(); break;
            case 5 : delete_front(); break;
            case 6 : delete_end(); break;
            case 7 : exit(0); break;
            default : printf("\nInvalid choice"); break;
            }
    }
}
