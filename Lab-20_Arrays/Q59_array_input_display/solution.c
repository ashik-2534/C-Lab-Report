/*
 * Lab 20 - Arrays
 * Question 59: Write a C program to input and display the elements of a
 *    one-dimensional array from 1 to 10 numbers.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int arr[10], n, i;

    printf("How many numbers do you want to enter (1 to 10)? ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Invalid size! Please enter a number from 1 to 10.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
