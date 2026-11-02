/*
 * Lab 08 - Relational and Logical Operators
 * Question 24: Write a C program to check whether a person is eligible to
 *    vote.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}
