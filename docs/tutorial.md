# How to Build an Advanced Calculator in C

## Goal
In this tutorial, you will learn how to create a versatile console-based calculator in C. Unlike basic addition programs, this calculator will handle **decimal numbers** (e.g., 5.5 + 2.1), support **four operations** (+, -, *, /), and include safety checks to prevent crashing when dividing by zero.

## Prerequisites
We'll assume you already know the basics of C and can:
* Create and edit a `.c` file.
* Compile code using `make` in the terminal.
* Use the `cs50` library for basic input.
* Understand basic `if/else` logic.

## Key Concepts

### 1. Floating Point Numbers (`double`)
Standard `int` variables chop off decimal points (e.g., `5 / 2` results in `2`). To get precise results like `2.5`, we must use the **`double`** data type (double-precision floating-point).



### 2. Character Comparison
We will use the **`char`** type to detect which operation the user wants to perform. In C, single characters must be surrounded by **single quotes** (e.g., `'+'`), not double quotes.

### 3. Logic Flow
We will use an `if - else if - else` chain to decide which mathematical operation to run based on the user's input.

## Step-by-Step Implementation

### Step 1: Inputs
First, include your libraries. Inside `main`, we need to ask the user for three things: the first number, the operation symbol, and the second number.

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("--- Advanced Calculator ---\n");

    // Use get_double to support decimals
    double x = get_double("First number: ");
    
    // Use get_char to capture symbols like +, -, *, /
    char op = get_char("Operation (+, -, *, /): ");
    
    double y = get_double("Second number: ");
```
Step 2: Handling Logic and Operations
Now we check what op (operation) the user provided. We also format the output using %.2f to show exactly two decimal places.

C

    // Check for Addition
    if (op == '+')
    {
        printf("Result: %.2f\n", x + y);
    }
    // Check for Subtraction
    else if (op == '-')
    {
        printf("Result: %.2f\n", x - y);
    }
    // Check for Multiplication
    else if (op == '*')
    {
        printf("Result: %.2f\n", x * y);
    }
Step 3: Division and Safety
Division requires special care. In programming, dividing by 0 is illegal and can crash programs or cause weird errors. We must check for it first.

C

    else if (op == '/')
    {
        // Safety Check: Prevent division by zero
        if (y == 0)
        {
            printf("Error: Cannot divide by zero.\n");
        }
        else
        {
            printf("Result: %.2f\n", x / y);
        }
    }
    // Handle invalid inputs
    else
    {
        printf("Error: Invalid operation.\n");
    }
}
Expected Result
When the program runs, the user should be able to perform decimal math.

(The user types 10.5, then selects '/', then types 2, and the result 5.25 appears)

Troubleshooting: What could go wrong?
1. The "Single Quote" Mistake A very common error in C is mixing up quotes.

"A" is a String (text).

'A' is a Char (single character). If you write if (op == "+"), the code will not compile or will fail. Always use single quotes for single characters.

2. Integer Division If you accidentally use int x and int y instead of double, 5 / 2 will print 2.00 instead of 2.50. Ensure you initialize your variables as double from the start.
