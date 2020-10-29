#include <stdio.h>
#include <stdlib.h>

typedef enum {
	CELSIUS,
	FAHRENHEIT
} escala_t;

typedef float dato_t;

char s[10];

float ftoc(float fahrenheit) {
	return (((fahrenheit - 32)*5)/9);
}

void title()
{
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
	printf("--- FAHRENHEIT TO CELSIUS CONVERTER ---\n");
	printf("---------------------------------------\n");
	printf("---      to exit press Ctrl+D      ----\n");
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
}

int main(void)
{
	
/*	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
	printf("--- FAHRENHEIT TO CELSIUS CONVERTER ---\n");
	printf("---------------------------------------\n");
	printf("---      to exit press Ctrl+D      ----\n");
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
*/
	title();
	dato_t i;
	float res;
	printf(">> ");
	while(fgets(s, 10, stdin) != NULL) {
		i = atoi(s);
		res = ftoc(i);
		printf("%.0f°F = %.2f°C\n", i, res);
		printf(">> ");
	}
	return 0;
}



