/*
 * Lab 13 - switch Statement
 * Question 39: Write a C program to display the day of the week using
 *    switch.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int day;

    printf("Enter a number (1 to 7): ");
    scanf("%d", &day);

    // 1 = Monday, 2 = Tuesday, ... 7 = Sunday
    switch (day)
    {
        case 1:
            printf("The day is Monday.\n");
            break;
        case 2:
            printf("The day is Tuesday.\n");
            break;
        case 3:
            printf("The day is Wednesday.\n");
            break;
        case 4:
            printf("The day is Thursday.\n");
            break;
        case 5:
            printf("The day is Friday.\n");
            break;
        case 6:
            printf("The day is Saturday.\n");
            break;
        case 7:
            printf("The day is Sunday.\n");
            break;
        default:
            printf("Invalid input! Please enter a number from 1 to 7.\n");
    }

    return 0;
}
