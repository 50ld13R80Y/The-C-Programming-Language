//bare-bones version of the UNIX program wc

#include "stdio.h"

#define IN 1
#define OUT 0

//count lines, words, and characters in input
int main(int argc, char const *argv[])
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;

        if (c == '\n')
        {
            ++nl;
        }

        // These three characters indicate the end of a word
        // Set the state to out after reaching these
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }

        //if state is out then count the new word
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("lines: %d\t words: %d\tcharacters: %d\n", nl, nw, nc);
    return 0;
}
