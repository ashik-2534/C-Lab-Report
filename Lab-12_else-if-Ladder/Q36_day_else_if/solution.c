/*
 * Lab 12 - else-if Ladder
 * Question 36: Write a C program to display the day of the week based on a
 *    number from 1 to 7.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int day;

    printf("Enter a number (1 to 7): ");
    scanf("%d", &day);

    // 1 = Monday, 2 = Tuesday, ... 7 = Sunday
    if (day == 1)
        printf("The day is Monday.\n");
    else if (day == 2)
        printf("The day is Tuesday.\n");
    else if (day == 3)
        printf("The day is Wednesday.\n");
    else if (day == 4)
        printf("The day is Thursday.\n");
    else if (day == 5)
        printf("The day is Friday.\n");
    else if (day == 6)
        printf("The day is Saturday.\n");
    else if (day == 7)
        printf("The day is Sunday.\n");
    else
        printf("Invalid input! Please enter a number from 1 to 7.\n");

    return 0;
}
