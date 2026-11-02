/*
 * Lab 05 - More Arithmetic Problems
 * Question 14: Write a C program to convert Celsius to Fahrenheit.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    return 0;
}
