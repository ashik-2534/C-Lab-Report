/*
 * Lab 12 - else-if Ladder
 * Question 35: Write a C program to determine whether a number is
 *    positive, negative, or zero using an else-if ladder.
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
    else if (n < 0)
        printf("%d is negative.\n", n);
    else
        printf("The number is zero.\n");

    return 0;
}
