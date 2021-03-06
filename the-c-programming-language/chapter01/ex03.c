/*	Exercise 1-3 - prints a table with degrees conversion	*/

#include <stdio.h>


int main (void)
{
	int lower, upper, step;
	float c, f;

/*	Fahrenheit values;	*/
	lower = 0;
	upper = 100;
	step = 5;

	printf("Fahrenheit to Celsius\n\n");

	for(f = 0; f <= upper; f += step) { 
		c = ((f - 32) * 5) / 9;
		printf("%5.1f°F = %5.1f°C\n", f, c);
	}

	return 0;
}
