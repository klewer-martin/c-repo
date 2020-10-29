/*	Ejercicio 4 - Guia 2, Algoritmos y Programacion I - FIUBA	*/


#include <stdio.h>
#include <stdlib.h>

typedef enum {
	FAHRENHEIT,
	CELSIUS
} escala_t;

typedef float dato_t;

char s[10];

float ftoc(dato_t fahrenheit) {
	return (((fahrenheit - 32)*5)/9);
}

float ctof(dato_t celsius) {
	return (((celsius * 9)/5) + 32);
}

void title_ftoc()
{
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
	printf("--- FAHRENHEIT TO CELSIUS CONVERTER ---\n");
	printf("---------------------------------------\n");
	printf("---      to exit press Ctrl+D      ----\n");
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
}

void title_ctof()
{
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
	printf("--- CELCIUS TO FAHRENHEIT CONVERTER ---\n");
	printf("---------------------------------------\n");
	printf("---      to exit press Ctrl+D      ----\n");
	printf("---------------------------------------\n");
	printf("---------------------------------------\n");
}


int main(void)
{
	escala_t c;
	printf("0 - FAHRENHEIT TO CELSIUS\n");
	printf("1 - CELSIUS TO FAHRENHEIT\n");
	printf(">> ");
	c = getchar();
	c -= '0';
	if(c == FAHRENHEIT) {
		title_ftoc();
		dato_t i;
		float res;
		while(fgets(s, 10, stdin) != NULL) {
			i = atoi(s);
			res = ftoc(i);
			printf("%.0f°F = %.2f°C\n", i, res);
			printf(">> ");
		}
	} else if(c == CELSIUS) {
		title_ctof();
		dato_t i;
		float res;
		while(fgets(s, 10, stdin) != NULL) {
			i = atoi(s);
			res = ctof(i);
			printf("%.0f°C = %.2f°F\n", i, res);
			printf(">> ");
		}
	}
	return 0;
}



