/*
 * Lab 11 - Nested if
 * Question 33: Write a C program to find the smallest among three numbers
 *    using nested if.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a, b, c, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b)
    {
        if (a <= c)
            smallest = a;
        else
            smallest = c;
    }
    else
    {
        if (b <= c)
            smallest = b;
        else
            smallest = c;
    }

    printf("The smallest number is %d\n", smallest);

    return 0;
}
