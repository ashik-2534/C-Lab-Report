/*
 * Lab 02 - Variables, Constants and Data Types
 * Question 4: Write a C program to declare and display variables of
 *    different data types.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    int age = 20;
    float height = 5.8f;
    double pi = 3.141592653;
    char grade = 'A';
    long population = 170000000;

    printf("int    age        = %d\n", age);
    printf("float  height     = %.1f\n", height);
    printf("double pi         = %.9lf\n", pi);
    printf("char   grade      = %c\n", grade);
    printf("long   population = %ld\n", population);

    return 0;
}
