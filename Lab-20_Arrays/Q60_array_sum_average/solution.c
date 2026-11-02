/*
 * Lab 20 - Arrays
 * Question 60: Write a C program to find the sum and average of array
 *    elements from user input.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    float average;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size! Please enter a number from 1 to 100.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    printf("Sum     = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
