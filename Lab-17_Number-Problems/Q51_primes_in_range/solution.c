/*
 * Lab 17 - Number Problems
 * Question 51: Write a C program to print all prime numbers between two
 *    given numbers.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int low, high, n, i, temp, isPrime;

    printf("Enter two numbers: ");
    scanf("%d %d", &low, &high);

    if (low > high)
    {
        temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d: ", low, high);

    for (n = low; n <= high; n++)
    {
        isPrime = 1;

        if (n < 2)
            isPrime = 0;

        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", n);
    }
    printf("\n");

    return 0;
}
