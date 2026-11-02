/*
 * Lab 02 - Variables, Constants and Data Types
 * Question 5: Write a C program to display the size of different data
 *    types using sizeof().
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    printf("Size of char        = %d byte(s)\n", (int)sizeof(char));
    printf("Size of short       = %d byte(s)\n", (int)sizeof(short));
    printf("Size of int         = %d byte(s)\n", (int)sizeof(int));
    printf("Size of long        = %d byte(s)\n", (int)sizeof(long));
    printf("Size of long long   = %d byte(s)\n", (int)sizeof(long long));
    printf("Size of float       = %d byte(s)\n", (int)sizeof(float));
    printf("Size of double      = %d byte(s)\n", (int)sizeof(double));
    printf("Size of long double = %d byte(s)\n", (int)sizeof(long double));

    return 0;
}
