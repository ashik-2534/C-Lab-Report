/*
 * Lab 15 - for Loop Problems
 * Question 45: Write a C program to calculate the factorial of a number.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
