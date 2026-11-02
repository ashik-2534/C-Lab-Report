/*
 * Lab 07 - Conditional Operator
 * Question 20: Write a C program to find the larger of two numbers using
 *    the conditional operator.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a, b, larger;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;

    printf("The larger number is %d\n", larger);

    return 0;
}
