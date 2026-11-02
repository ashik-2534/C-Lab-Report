/*
 * Lab 03 - Input and Output
 * Question 7: Write a C program to take two integers as input and display
 *    them.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("First number  = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}
