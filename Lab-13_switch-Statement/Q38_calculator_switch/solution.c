/*
 * Lab 13 - switch Statement
 * Question 38: Write a C program to perform basic arithmetic operations
 *    using switch.
 * Author: Ashik Ridwan
 */
#include <stdio.h>
int main()
{
    double a, b;
    char op;

    printf("Enter an expression (number operator number): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error: division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator! Use +, -, * or /.\n");
    }

    return 0;
}
