/**
 * Experiment - 7
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Design, Develop and Implement a menu driven Program in C for the following
 * operations on Singly Linked List (SLL) of Student Data with the fields: USN, Name,
 * Branch, Sem, PhNo
 * a. Create a SLL of N Students Data by using front insertion.
 * b. Display the status of SLL and count the number of nodes in it
 * c. Perform Insertion / Deletion at End of SLL
 * d. Perform Insertion / Deletion at Front of SLL(Demonstration of stack)
 * e. Exit
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
    char usn[20],name[30],branch[5],phno[12];
    int sem;
    struct node *link;
};

typedef struct node *NODE;
NODE temp,FIRST = NULL;

NODE getnode() {
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    x->link = NULL;
    return x;
}

void read() {
    temp = getnode();
    printf("\nEnter USN :");
    scanf("%s",temp->usn);
    printf("\nEnter Name :");
    scanf("%s",temp->name);
    printf("\nEnter Branch :");
    scanf("%s",temp->branch);
    printf("\nEnter Semester : ");
    scanf("%d",&temp->sem);
    printf("\nEnter Ph.No. :");
    scanf("%s",temp->phno);
}

void create_sll() {
    int n,i;
    printf("\nEnter number of students :");
    scanf("%d",&n);
    for(i = 1;i <= n;i++) {
        printf("\nEnter the details of student %d",i);
        read();
        if(FIRST == NULL)
            FIRST = temp;
        else {
            temp->link = FIRST;
            FIRST = temp;
        }
    }
}

void display_count() {
    int count = 0;
    temp = FIRST;
    printf("\nStudent details :\n");
    if(FIRST == NULL) {
        printf("\nStudent detail is null and count is 0");
    }
    else {
        printf("\nUSN\t\tName\t\tBranch\t\tSem\t\tPh.No.");
        while(temp != NULL) {
          count++;
          printf("\n%s\t%s\t\t%s\t\t%d\t\t%s\n",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
          temp = temp->link;
        }
        printf("\nTotal node count is %d",count);
    }
    return;
}

void insert_front() {
    printf("\nEnter the details of students\n");
    read();
    if(FIRST == NULL) {
        FIRST = temp;
    }
    else {
        temp->link = FIRST;
        FIRST = temp;
    }
}

void insert_end() {
    NODE LAST = FIRST;
    printf("\nEnter the details of students\n");
    read();
    if(FIRST == NULL) {
        FIRST = temp;
    }
    else {
        while(LAST->link != NULL) {
            LAST = LAST->link;
        }
        LAST->link = temp;
    }
}

void delete_front() {
    temp = FIRST;
    if(FIRST == NULL) {
        printf("\nList is Empty");
    }
    else {
        printf("\nDeleted element is %s\n",temp->usn);
        FIRST = FIRST->link;
        free(temp);
    }
    return;
}

void delete_end() {
    NODE LAST = NULL;
    temp = FIRST;
    if(FIRST == NULL) {
        printf("\nList is Empty");
    }
    else if(FIRST->link == NULL) {
        printf("\nDeleted element is %s",temp->usn);
        free(FIRST);
        FIRST = NULL;
    }
    else {
        while(temp->link != NULL) {
            LAST = temp;
            temp = temp->link;
            }
        LAST->link = NULL;
        printf("\nDeleted element is %s",temp->usn);
        free(temp);
        }
        return;
}

void main() {
    int choice;
    while(1) {
        printf("\n****MENU****");
        printf("\n1.Create-SLL\n2.Display-SLL\n3.Insert-Front\n4.Insert-End\n5.Deletion-Front\n6.Deletion-End\n7.Exit");
        printf("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice) {
             case 1 : create_sll(); break;
             case 2 : display_count(); break;
             case 3 : insert_front(); break;
             case 4 : insert_end(); break;
             case 5 : delete_front(); break;
             case 6 : delete_end(); break;
             case 7 : return;
             default : printf("\nInvalid choice");
             }
    }
}
