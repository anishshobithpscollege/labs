/*
 * Program to Calculate and sum of 5 subjects and find percentage
 * @Date 27-05-2021
 */

#include <stdio.h>

int main() {

    float sub1,sub2,sub3,sub4,sub5,sum,percentage;
 
    printf("Enter Marks of subject 1 : ");
    scanf("%f", &sub1);
    printf("\nEnter Marks of subject 2: ");
    scanf("%f", &sub2);
    printf("\nEnter Marks of subject 3 : ");
    scanf("%f", &sub3);
    printf("\nEnter Marks of subject 4 : ");
    scanf("%f", &sub4);
    printf("\nEnter Marks of subject 5 : ");
    scanf("%f", &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / 500) * 100;
    printf("\nTotal Marks = ", sum);
    pintf("\nPercentage = ", percentage);
    
    return 0;
}