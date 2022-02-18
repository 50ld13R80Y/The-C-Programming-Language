#include "stdio.h"

int main(int argc, char const *argv[])
{
    /* code */

    printf("Trigger EOF on Unix is ctrl+d");
    printf("Trigger EOF on Windows is ctrl+z");
    printf("the the value of getchar() is %d", getchar() != EOF);

    return 0;
}
