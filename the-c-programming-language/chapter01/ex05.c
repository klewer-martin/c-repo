/*	Exercise 1-5 - prints a table with degrees conversion	
	from bigger to lower	*/

#include <stdio.h>

/*	Celsius values;	*/
#define LOWER 0		/* Celsius start number */
#define UPPER 50	/* Celsius max number */
#define STEP 2		/* Step between Celsius numbers	*/


int main (void)
{
	float c, f;

	printf("Celsius to Fahrenheit\n\n");

	for(c = upper; c >= lower; c -= step) { 
		f = (c * 9.0) / 5.0 + 32;
		printf("%5.1f°C = %5.1f°F\n", c, f);
	}

	return 0;
}
