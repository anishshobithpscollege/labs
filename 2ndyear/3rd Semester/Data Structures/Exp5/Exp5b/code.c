/**
 * Experiment - 5b
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Design, Develop and Implement a Program in C for the following Stack Applications
 *  b. Solving Tower of Hanoi problem with n disks.
 */

#include <stdio.h>
#include <math.h>

void tower(int n, char source, char temp, char dest)
{
    if (n == 0)
        return;
    tower(n - 1, source, dest, temp);
    printf("\nMove disc %d from %c to %c", n, source, dest);
    tower(n - 1, temp, source, dest);
}

void main()
{
    int n;

    printf("\nEnter the number of discs : ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    printf("\n\n Total number of move are : %d ", (int)pow(2, n) - 1);
}

