# mini-Lernperiode13
This just cover's a brief 4 week where I try to learn a new programming skill.


### Selection
For the decission of the skill which I will learn in the next 4 weeks. I am going to pick three things which intresset me and then evaluate which one to focus on.

One thing that immediately came into mind was C, the classic as it is a pretty old language but it stil stod the test of time. 
Secondly Rust, this is timewise the opposite of C and it is considered the new C.
Lastely, React.js this JS-Framework would be more of an building stone then a completely new Programming language. 

### Decision
I personally decided to g for C as it seemed like the grand father of Programming languages. I also want to deepen my knowledge in a more old-school language, as a lot of things are nowadays done for you. The realation between compiler and source code and so on

## Action

### Hello World
The first task seemed pretty easy to follow, creating the classic hello world. This seemed pretty easy as it is usally give by deafualt when you create a new projekt. But as is started C on VSC, nothing. Then I googled how I can print Hello, world. I took the input wrote it into my file and wanted to run it but there was no run button. I first had to compile the Source Code into a 0 and 1 which the Computers understands. To do that you use the Terminal, in which you can compile the Code written into a language that the computers understands. And with this you can run the programm.

### How to run the code in C
first we create the file by writing __code hello.c__ for example, this creates a file where we can write source code. 


__The Code__ 
```c
#include <stdio.h>

int main(void)
{
  printf("hello,World!\n");
}
```
This is the Code for hello World. It looks pretty normal but there is a lot of syntax which could result in some anoyning mistakes. The realtion with the Terminal is intressting as it requers more logic.

Compile the code by using __make hello.c__. This creates a compiled version of the source code(hello) that the computur understands. 

Afterwards we write __./hello__ to run this complied version of the code



Next I wated to take Input of the User like a Console.readline. 
So it goes back to googling and reading. It is interesting that for every little things u want to do you have to download them form a library and you feel really lost. Hence I used something more User friendly the https://manual.cs50.io/ it helps to reduce the amount of input. I used the library cs50.h

With this Code i can get the input of a user 

    string a = get_string("What is your name? ");

With this I can Output the variabel 

    printf("hello, %s\n", a);

The %s is the most bizarre part until now 

### Comments

The use of comments is with // , /* */like in Java, JavaScript or in my beloved C#. 

## 16.01.26


- [ ] update the Tutorial or Vlog rather
- [ ] build a calculator 
- [X] getting familiar with the comparison operations
- [ ] complete the last part of the tutorial 



## Comparison Operations
After mastering how to talk to the computer (Output) and listen to it (Input), the next logical step was teaching it to think. This means making decisions using conditionals and comparison operations.

In most languages I've seen, writing an if statement is straightforward. You check if x is greater than y, or if a equals b. In C, the basic math comparisons were exactly what I expected:

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what is x? " );
    int y = get_int("what is y? ");

    if (x < y)
    {
        printf("x is less than y\n");

    }
    else if (x > y)
    {
        printf("x is more than y\n");

    }

    else
    {
        printf("x equal to y\n");
    }

}
``` 

However, the "Old School" nature of C struck again when I tried to compare text.

The String Problem I naively tried to compare two strings using ==, which is standard in many modern languages. I wrote code asking the user for a password, expecting if (password == "secret") to work.

It didn't.

I learned that in C, string variables (especially when using the CS50 library) are actually pointing to a location in the computer's memory. When you use ==, C doesn't check if the text is the same; it checks if the memory address is the same.

To actually compare the text, I had to use a specific function from the <string.h> library called strcmp (String Compare). It felt very manual compared to Python or JavaScript.

The Code Here is how I eventually got a password check to work:

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h> // Needed for string comparison

int main(void) 
{
    string answer = get_string("What's the password? ");

    // strcmp returns 0 if the strings are identical
    if (strcmp(answer, "mellon") == 0) 
    {
        printf("Welcome, friend.\n");
    }
    else 
    {
        printf("Access denied.\n");
    }
}
```
It is a bit weird that strcmp returns 0 for "true" (match found), whereas usually 0 means false in programming logic. It’s just another one of those C quirks I have to memorize.

## Loops
For the next part of i decieded to write a cute little loop, in which a cat meows for how often the user wants it to. For example 6 or 7 times.

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int rps = get_int("how often do you want the cat to meow?");

    while (rps>0)
    {
        printf("cat:meow\n");
        rps --;
    }

}
```
This is buisness as usal. It is just a bit more complex with the complier and always make sure that it is on the desired version. 

I also used a for-loop like this.

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int rps = get_int("how often do you want the cat to meow?");

    for(int i = 0; i < rps; i ++)
    {
        printf("cat:meow\n");
    }

}
```

