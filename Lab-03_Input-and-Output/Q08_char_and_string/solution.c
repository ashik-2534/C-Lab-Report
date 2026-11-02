/*
 * Lab 03 - Input and Output
 * Question 8: Write a C program to take a character and a string as input
 *    and display them.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    char ch;
    char str[50];

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter a string (one word): ");
    scanf("%49s", str);

    printf("Character = %c\n", ch);
    printf("String    = %s\n", str);

    return 0;
}
