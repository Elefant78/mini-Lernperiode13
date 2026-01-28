#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("--- Advanced Calculator ---\n");

    // 1. Get the first number (using double for decimals)
    double x = get_double("First number: ");

    // 2. Ask the user what they want to do
    char op = get_char("Operation (+, -, *, /): ");

    // 3. Get the second number
    double y = get_double("Second number: ");

    // 4. Decide what math to do based on the 'op' character
    if (op == '+')
    {
        printf("Result: %.2f\n", x + y);
    }
    else if (op == '-')
    {
        printf("Result: %.2f\n", x - y);
    }
    else if (op == '*')
    {
        printf("Result: %.2f\n", x * y);
    }
    else if (op == '/')
    {
        // Safety Check: You cannot divide by zero!
        if (y == 0)
        {
            printf("Error: Cannot divide by zero.\n");
        }
        else
        {
            // %.2f limits the output to 2 decimal places
            printf("Result: %.2f\n", x / y);
        }
    }
    else
    {
        // If the user types 'x' or '?' or something invalid
        printf("Error: Invalid operation.\n");
    }
}