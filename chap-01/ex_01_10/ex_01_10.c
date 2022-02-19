// Write a program to copy its input to its output, replacing each
// tab by \ t, each backspace by \b, and each backslash by \ \. This makes tabs
// and backspaces visible in an unambiguous way

#include "stdio.h"
int main(int argc, char const *argv[])
{
    int c;
    while ((c = getchar()) != EOF)
    {
        /* code */
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        //ctrl+h is backspace operation
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }

        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }

        else
        {
            putchar(c);
        }
    }

    return 0;
}
