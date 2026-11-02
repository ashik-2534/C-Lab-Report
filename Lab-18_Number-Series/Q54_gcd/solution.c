/*
 * Lab 18 - Number Series
 * Question 54: Write a C program to find the GCD of two numbers.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a, b, x, y, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("GCD of %d and %d = %d\n", a, b, x);

    return 0;
}
