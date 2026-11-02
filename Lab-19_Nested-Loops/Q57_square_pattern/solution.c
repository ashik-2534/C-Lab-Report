/*
 * Lab 19 - Nested Loops
 * Question 57: Write a C program to print a square star pattern.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
