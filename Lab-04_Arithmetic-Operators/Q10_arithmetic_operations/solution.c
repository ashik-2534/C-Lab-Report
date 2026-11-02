/*
 * Lab 04 - Arithmetic Operators
 * Question 10: Write a C program to perform addition, subtraction,
 *    multiplication, division, and modulus of two numbers.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a, b, sum, diff, prod, mod;
    float quotient;

    printf("Enter two integers (second one must not be 0): ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quotient = (float)a / b;
    mod = a % b;

    printf("Addition       : %d + %d = %d\n", a, b, sum);
    printf("Subtraction    : %d - %d = %d\n", a, b, diff);
    printf("Multiplication : %d * %d = %d\n", a, b, prod);
    printf("Division       : %d / %d = %.2f\n", a, b, quotient);
    printf("Modulus        : %d %% %d = %d\n", a, b, mod);

    return 0;
}
