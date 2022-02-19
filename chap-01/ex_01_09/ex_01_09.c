/*
Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank
*/

#include "stdio.h"

#define BLANK 1
#define NOTBLANK 0

int main(int argc, char const *argv[])
{
    int c;
    int blank;
    // The precedence of != is higher than that of =
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            blank = NOTBLANK;
        }
        if (!blank)
        {
            putchar(c);
        }
        if (c == ' ')
        {
            blank = BLANK;
        }
    }

    return 0;
}
