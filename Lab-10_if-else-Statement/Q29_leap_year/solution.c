/*
 * Lab 10 - if-else Statement
 * Question 29: Write a C program to check whether a year is a leap year or
 *    not.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
