/*
 * Lab 14 - Loops
 * Question 42: Write a C program to print even numbers from 1 to 100.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int i;

    for (i = 2; i <= 100; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
