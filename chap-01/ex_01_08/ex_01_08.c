#include "stdio.h"
int main(int argc, char const *argv[])
{

    /* program to count blanks, tabs, newlines */
    int c;
    int n1, t1, b1;

    // BUG
    //n1, t1, b1 = 0;

    n1 = t1 = b1 = 0;

    while ((c = getchar()) != EOF)
    {

        if (c == '\n')
        {
            ++n1;
        }
        else if (c == '\t')
        {
            /* code */
            ++t1;
        }
        else if (c == ' ')
        {
            ++b1;
        }
    }

    printf("The number of newlines: %d\n, The number of tabs: %d\n, The number of blanks: %d\n", n1, t1, b1);

    return 0;
}
