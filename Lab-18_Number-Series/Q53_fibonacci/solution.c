/*
 * Lab 18 - Number Series
 * Question 53: Write a C program to generate the Fibonacci series up to N
 *    terms.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
