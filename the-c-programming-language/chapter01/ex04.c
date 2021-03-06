/*	Exercise 1-4 - prints a table with degrees conversion	*/

#include <stdio.h>


int main (void)
{
	int lower, upper, step;
	float c, f;

/*	Celsius values;	*/
	lower = 0;
	upper = 50;
	step = 2;

	printf("Celsius to Fahrenheit\n\n");

	for(c = 0; c <= upper; c += step) { 
		f = (c * 9.0) / 5.0 + 32;
		printf("%5.1f°C = %5.1f°F\n", c, f);
	}

	return 0;
}
