# How to Build a Simple Calculator in C

## Goal
In this tutorial, you will learn how to create a simple console-based calculator in C. This program will prompt the user for two numbers, add them together, and display the result. We will focus on handling user input and ensuring our variables are large enough to handle the math.

## Prerequisites
We'll assume you already know the basics of C and can:
* Open a terminal and navigate directories.
* Edit a `.c` file in VS Code.
* Compile code using `make` (e.g., `make calculator`).
* Include the `cs50` library in your environment.

## Key Concepts

### 1. Handling Large Numbers (`long` vs `int`)
We will focus on explaining the **`long`** data type. In C, a standard `int` can only hold numbers up to about 2 billion. If a user tries to add 2 billion + 2 billion, an `int` will crash or give a wrong answer (this is called "Integer Overflow").

To fix this, we use `long` (long integer), which uses 64 bits of memory and can hold massive numbers.

### 2. Format Specifiers
When printing variables in C, you must tell the computer exactly what type of data is coming.
* `%i` is used for `int`.
* `%li` is used for `long`.

## Step-by-Step Implementation

First, include the necessary libraries. `stdio.h` allows us to print to the screen, and `cs50.h` gives us the easy-to-use input functions.

```c
#include <cs50.h>
#include <stdio.h>
```
Next, inside our main function, we will ask the user for input. We use get_long instead of get_int to be safe.

C
```
int main(void)
{
    // Get input from user
    long x = get_long("x: ");
    long y = get_long("y: ");
Finally, we print the result. Note the usage of %li in the code snippet below:
```
C

    // Output the result
    printf("Result: %li\n", x + y);
}
Expected Result
When you run your program, it should look like this animation below. The program pauses, waits for you to type a number, and then calculates the sum instantly.

(Note: If you don't have a GIF yet, imagine the terminal asking "x: 5", "y: 10", and printing "Result: 15")

Troubleshooting: What could go wrong?
Problem: The output looks weird or is a random number. Solution: Check your Format Specifier. A common mistake is using %s (string) or %i (integer) when trying to print a long.

If you write:

C
```
// WRONG
printf("Result: %i\n", x + y);
```
The compiler might give you a warning, and the printed number will be incorrect if the sum is very large. Always ensure your placeholder matches your variable type (%li for long).
