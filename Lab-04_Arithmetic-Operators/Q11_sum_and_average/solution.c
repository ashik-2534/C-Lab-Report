/*
 * Lab 04 - Arithmetic Operators
 * Question 11: Write a C program to calculate the sum and average of three
 *    numbers.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0;

    printf("Sum     = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
