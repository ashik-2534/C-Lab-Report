/*
 * Lab 16 - while and do-while
 * Question 47: Write a C program to reverse the digits of an integer using
 *    a while loop.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int num, n, rev = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    n = num;
    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Reverse of %d = %d\n", num, rev);

    return 0;
}
