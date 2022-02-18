#include "stdio.h"

// print Celsius-Fahrenheit table
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = upper;
	printf("cel \t far\n");
	printf("===============\n");
    

	while (celsius >= lower) {

		fahr = celsius * (9.0/5.0) + (32.0);
		// 6.1f print as floating point, at least 6 wide and 1 after decimal point
		printf("%4.0f\t%6.1f\n", celsius, fahr);

		celsius = celsius - step;	
	
	}
}
