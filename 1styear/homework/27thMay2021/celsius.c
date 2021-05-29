/*
 * Program to convert Fahrenheit to Celsius scale.
 * @Date 27-05-2021
 */

#include <stdio.h>

int main() {

    float celsius, fahrenheit;
 
    printf("Please Enter the temperature in Fahrenheit :");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("\nTemperature in Celsius = %.2f", celsius);

    return 0;
}