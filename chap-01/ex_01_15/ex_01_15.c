// Rewrite the temperature conversion program of Section 1.2 to
// use a function for conversion

#include "stdio.h"

int far_to_cel(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}

int cel_to_far(int celsius)
{
    return celsius * (9.0 / 5.0) + (32.0);
}

// print Celsius-Fahrenheit table
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("cel \t far\n");
    printf("===============\n");
    while (celsius <= upper)
    {

        fahr = cel_to_far(celsius);
        // 6.1f print as floating point, at least 6 wide and 1 after decimal point
        printf("%4.0f\t%6.1f\n", celsius, fahr);

        celsius = celsius + step;
    }
}
