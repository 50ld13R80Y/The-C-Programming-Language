// Revise the main routine of the longest-line program so it will
// correctly print the length of arbitrarily long input lines, and as much as possible
// of the text.

// while (there's another line)
//  if (it's longer than the previous longest)
//      save it
//      save its length
// print longest line

#include "stdio.h"
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        }

    return 0;
}
