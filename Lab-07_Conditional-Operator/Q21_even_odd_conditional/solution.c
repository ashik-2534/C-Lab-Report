/*
 * Lab 07 - Conditional Operator
 * Question 21: Write a C program to check whether a number is even or odd
 *    using the conditional operator.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d is %s.\n", n, (n % 2 == 0) ? "Even" : "Odd");

    return 0;
}
