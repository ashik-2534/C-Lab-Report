/*
 * Lab 05 - More Arithmetic Problems
 * Question 13: Write a C program to calculate the area and circumference
 *    of a circle.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area          = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
