/*
 * Lab 08 - Relational and Logical Operators
 * Question 23: Write a C program to demonstrate the use of logical AND,
 *    OR, and NOT operators.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;

    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    printf("Logical AND (&&)\n");
    printf("(a < b) && (b < c) = %d\n", (a < b) && (b < c));
    printf("(a > b) && (b < c) = %d\n\n", (a > b) && (b < c));

    printf("Logical OR (||)\n");
    printf("(a > b) || (b < c) = %d\n", (a > b) || (b < c));
    printf("(a > b) || (b > c) = %d\n\n", (a > b) || (b > c));

    printf("Logical NOT (!)\n");
    printf("!(a < b) = %d\n", !(a < b));
    printf("!(a > b) = %d\n\n", !(a > b));

    printf("(1 = True, 0 = False)\n");

    return 0;
}
