/**
 * Experiment - 1
 *
 * Date: 29-10-2021
 *
 * @AUTHOR     - Anish Shobith P S
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 *
 * Question :
 * Design, Develop and Implement a menu driven Program in C for the following Array  * operations.
 *  a. Creating an Arrat of N Integer Elements.
 *  b. Display of Array Elements with Suitable Headings.
 *  c. Inserting an Element at given valid Position.
 *  d. Deleting an Element at a given valid Position.
 * Support the program with functions for each of the above operations.
 */

#include <stdio.h>
#include <stdlib.h>

int a[20], n, i, ele, pos;

void create();
void display();
void insert();
void delete();

void main()
{
    int choice;

    while (1)
    {
        printf("\n");
        printf("*****MENU*****\n");
        printf("1. Create\n2. Display\n3. Insert\n4. Delete\n5. Exit");
        printf("\n\tEnter you choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            insert();
            break;

        case 4:
            delete();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("\nInvalid Choice\n");
            break;
        }
    }
}

void create()
{
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void display()
{
    printf("\n The Array elements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

}

void insert()
{
    printf("Enter the position for the new element :");
    scanf("%d", &pos);

    if (pos >= n + 1)
        printf("\nInsertion is not possible.\n");
    else
    {
        printf("Enter element to be inserted : ");
        scanf("%d", &ele);

        for (i = n - 1; i >= pos; i--)
            a[i + 1] = a[i];

        a[pos] = ele;
        n = n + 1;
    }
}

void delete()
{
    if (n == 0)
        printf("\nNo elements to delete");
    else
    {
        printf("Enter the postion of element to be deleted :");
        scanf("%d", &pos);

        if (pos >= n + 1)
            printf("\nDeltetion is not possible");
        else
        {
            ele = a[pos];

            for (i = pos; i < n - 1; i++)
                a[i] = a[i + 1];

            n = n - 1;
            printf("The deleted element is %d", ele);
        }
    }
}