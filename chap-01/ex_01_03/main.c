#include "stdio.h"

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("far \t cel\n");
	printf("===============\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		// 6.1f print as floating point, at least 6 wide and 1 after decimal point
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;	
	
	}
}
