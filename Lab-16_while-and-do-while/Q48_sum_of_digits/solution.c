/*
 * Lab 16 - while and do-while
 * Question 48: Write a C program to find the sum of the digits of a
 *    number.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int num, n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    if (n < 0)
        n = -n;

    do
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    } while (n != 0);

    printf("Sum of the digits of %d = %d\n", num, sum);

    return 0;
}
