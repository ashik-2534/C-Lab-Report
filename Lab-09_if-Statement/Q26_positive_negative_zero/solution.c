/*
 * Lab 09 - if Statement
 * Question 26: Write a C program to check whether a number is positive,
 *    negative, or zero.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("%d is positive.\n", n);

    if (n < 0)
        printf("%d is negative.\n", n);

    if (n == 0)
        printf("The number is zero.\n");

    return 0;
}
