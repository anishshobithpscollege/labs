/*
 * Program to enter and output student details.
 */

#include <stdio.h>

int main() {
    char name[100], branch[100], semester[100], college[100], temp;

    printf("Enter student name: ");
    scanf("%[^\n]", name);
    printf("\nEnter your branch: ");
    scanf("%c",&temp);
    scanf("%[^\n]", branch);
    printf("\nEnter your semester: ");
    scanf("%c",&temp);
    scanf("%[^\n]", semester);
    printf("\nEnter your college name: ");
    scanf("%c",&temp);
    scanf("%[^\n]", college);

    printf("\n\nStudent Information\n");
    printf("\tName: %s\n", &name);
    printf("\tBranch: %s\n", &branch);
    printf("\tSemester: %s\n", &semester);
    printf("\tCollege: %s", &college);

    return 0;
}