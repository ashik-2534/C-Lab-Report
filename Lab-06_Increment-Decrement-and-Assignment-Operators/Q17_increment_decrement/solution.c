/*
 * Lab 06 - Increment, Decrement and Assignment Operators
 * Question 17: Write a C program to demonstrate the use of increment and
 *    decrement operators.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int a = 10;

    printf("Initial value of a     = %d\n", a);

    printf("Post-increment (a++)   = %d\n", a++);   // 10, then a = 11
    printf("Value of a now         = %d\n", a);

    printf("Pre-increment  (++a)   = %d\n", ++a);   // a = 12, then 12
    printf("Post-decrement (a--)   = %d\n", a--);   // 12, then a = 11
    printf("Value of a now         = %d\n", a);

    printf("Pre-decrement  (--a)   = %d\n", --a);   // a = 10, then 10

    return 0;
}
