/*
 * Lab 15 - for Loop Problems
 * Question 44: Write a C program to calculate the sum of the first N
 *    natural numbers.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
