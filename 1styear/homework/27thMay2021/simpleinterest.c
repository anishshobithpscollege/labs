/*
 * Program to calculate Simple Interest.
 * @date 27.05.2021
 */

#include <stdio.h>

int main() {
    float ammount, rate, time, si;

    printf("Enter the Principal Ammount : ");
    scanf("%f", &ammount);
    printf("\nEnter the rate of Interest : ");
    scanf("%f", &rate);
    printf("\nEnter the time of Interest : ");
    scanf("%f", &time);
    si = (ammount * rate * time) / 100;
    printf("\nSimple Interest = %.2f", si);

    return 0;
}