//bare-bones version of the UNIX program wc

#include "stdio.h"

#define IN 1
#define OUT 0

//count lines, words, and characters in input
int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {

        // These three characters indicate the end of a word
        // Set the state to out after reaching these
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar('\n');
        }

        //if state is out then count the new word
        else
        {

            //at the end of the word print newline char.
            putchar(c);
        }
    }
    return 0;
}
