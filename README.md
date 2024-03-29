# 0x11. C - printf

ALX C-programme Group Project

# Requirements
## General
-  Allowed editors: vi, vim, emacs
-  All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-  All your files should end with a new line
-  A README.md file, at the root of the folder of the project is mandatory
-  Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-  You are not allowed to use global variables
-  No more than 5 functions per file
-  In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
-  The prototypes of all your functions should be included in your header file called main.h
-  Don’t forget to push your header file
-  All your header files should be include guarded
-  Note that we will not provide the _putchar function for this project

## GitHub
There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

## More Info
Authorized functions and macros
-  write (man 2 write)
-  malloc (man 3 malloc)
-  free (man 3 free)
-  va_start (man 3 va_start)
-  va_end (man 3 va_end)
-  va_copy (man 3 va_copy)
-  va_arg (man 3 va_arg)

## Compilation
Your code will be compiled this way:

<code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c</code>

- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
- Our main files will include your main header file (main.h): #include main.h
-  You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf
-  We strongly encourage you to work all together on a set of tests
-  If the task does not specify what to do with an edge case, do the same as printf
-  We strongly encourage you to work all together on a set of tests
-  If the task does not specify what to do with an edge case, do the same as printf


# Authors
Abubakar Akinlawon
Kingsley

# Tasks
## Task 0.

Task completion = Complete
Checker: 2 errors

 I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory

Write a function that produces output according to a format.

    Prototype: int _printf(const char *format, ...);
    Returns: the number of characters printed (excluding the null byte used to end output to strings)
    write output to stdout, the standard output stream
    format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
        c
        s
        %
    You don’t have to reproduce the buffer handling of the C library printf function
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers


## Task 1.

Task completion =Complete
Checker: Passed

 Education is when you read the fine print. Experience is what you get if you don't
mandatory

Handle the following conversion specifiers:

    d
    i
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

 

## Task 2.

Task completion = Complete
Checker: Passed

 With a face like mine, I do better in print
#advanced

Handle the following custom conversion specifiers:

    b: the unsigned int argument is converted to binary

## Task 3.

Task completion = Complete
Checker: Passed

 What one has not experienced, one will never understand in print
#advanced

Handle the following conversion specifiers:

    u
    o
    x
    X
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

## Task 4.

Task completion = Complete
Checker: Passed

 Nothing in fine print is ever good news
#advanced

Use a local buffer of 1024 chars in order to call write as little as possible.

## Task 5.

Task completion = complete
Checker: Passed

 My weakness is wearing too much leopard print
#advanced

Handle the following custom conversion specifier:

    S : prints the string.
    Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

## Task 6.

Task completion = complete
Checker: 5\11 checked

 How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
#advanced

Handle the following conversion specifier: p.

    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers

## Task 7.

Task completion = Complete
Checker: 3/55 Checked

 The big print gives and the small print takes away
#advanced

Handle the following flag characters for non-custom conversion specifiers:

    +
    space
    #

## Task 8.

Task completion = complete
Checker: 4/77 checked

 Sarcasm is lost in print
#advanced

Handle the following length modifiers for non-custom conversion specifiers:

    l
    h

Conversion specifiers to handle: d, i, u, o, x, X

## Task 9.

Task completion = Complete
Checker: 4/72 checked

 Print some money and give it to us for the rain forests
#advanced

Handle the field width for non-custom conversion specifiers

## Task 10.

Task completion = complete
Checker: 4/87 checked

 The negative is the equivalent of the composer's score, and the print the performance
#advanced

Handle the precision for non-custom conversion specifiers.

## Task 11.

Task completion = complete
Checker: 4/32 checked

 It's depressing when you're still around and your albums are out of print
#advanced

Handle the 0 flag character for non-custom conversion specifiers.

## Task 12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
#advanced

Handle the - flag character for non-custom conversion specifiers.

## Task 13. Print is the sharpest and the strongest weapon of our party
#advanced

Handle the following custom conversion specifier:

    r : prints the reversed string


## Task 14. The flood of print has turned reading into a process of gulping rather than savoring
#advanced

Handle the following custom conversion specifier:

    R: prints the rot13'ed string


## Task 15. *
#advanced

All the above options work well together.

