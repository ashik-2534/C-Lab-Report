/*
 * Lab 09 - if Statement
 * Question 27: Write a C program to check whether a number is even or odd.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is even.\n", n);

    if (n % 2 != 0)
        printf("%d is odd.\n", n);

    return 0;
}
