/**
 * Experiment - 2
 *
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 *
 * Question :
 * Design, Develop and Implement a Program in C for the following operations on strings
 * a. Read a main string (STR), a PATtern string (PAT) and a replace string (REP)
 * b. Perform pattern Matching Operation: Find and replace all occurrences of PAT in STR with
 *    REP if PAT exists in STR. Report suitable messages in case PAT does not exist in STR
 * Support the program with functions for each of the above operations. Don't use Built-in
 * functions.
 */

#include <stdio.h>
#include <stdlib.h>

char STR[100], PAT[50], REP[50], RES[100];

int pattern_match_replace()
{
    int i = 0; // index for PAT
    int c = 0, m = 0; // index for STR
    int k = 0; // index for REP
    int flag = 0;
    int j = 0; // index for RES

    while (STR[c] != '\0')
    {
        while(STR[c] !='\0')
        {
            if(STR[m] == PAT[i])
            {
                i++;
                m++;
                if(PAT[i] == '\0')
                {
                    flag = 1;
                    for(k=0; REP[k]!='\0'; k++, j++)
                    {
                        RES[j] = REP[k];
                    }
                    i = 0;
                    c = m;
                }
            }
            else
            {
                RES[j]= STR[c];
                j++;
                c++;
                m=c;
                i=0;
            }
        }
        RES[j]='\0';
        return flag;
    }
}

void main()
{
    char temp;
    printf("Enter the main string : ");
    scanf("%[^\n]", &STR);
    printf("Enter a pattern string : ");
    scanf("%c",&temp);
    scanf("%[^\n]", &PAT);
    printf("Enter a string to be replaced : ");
    scanf("%c",&temp);
    scanf("%[^\n]", &REP);

    if (pattern_match_replace())
        printf("The resultant string is : %s\n", RES);
    else
        printf("Pattern not found in the string.\n");
}
