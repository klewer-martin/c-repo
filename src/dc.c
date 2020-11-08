/*	Ejercicio 4 - Guia 2, Algoritmos y Programacion I - FIUBA	*/


#include <stdio.h>
#include <stdlib.h>

typedef enum {
	FAHRENHEIT,
	CELSIUS
} escala_t;

typedef float dato_t;	//	this statement is not practical at all
			//	but was part of the intro to typedef

char s[10];

dato_t ftoc(dato_t fahrenheit) {
	return (((fahrenheit - 32)*5)/9);
}

dato_t ctof(dato_t celsius) {
	return (((celsius * 9)/5) + 32);
}

void title(int i)
{
	printf(
		"---------------------------------------\n"
		"---------------------------------------\n"
		"--- %s TO %s CONVERTER ---\n"
		"---------------------------------------\n"
		"---      to exit press Ctrl+D      ----\n"
		"---------------------------------------\n"
		"---------------------------------------\n",
		i ? "CELSIUS" : "FAHRENHEIT",
		i ? "FAHRENHEIT" : "CELSIUS"
	);
}

void cursor() {
	printf(">> ");
}

int main(void)
{
	escala_t c;
	dato_t i, res;
	printf("0 - FAHRENHEIT TO CELSIUS\n");
	printf("1 - CELSIUS TO FAHRENHEIT\n");
	cursor();
	c = getchar() - '0';
	if(c == FAHRENHEIT) {
		title(FAHRENHEIT);
		while(fgets(s, 10, stdin) != NULL) {
			i = atoi(s);
			res = ftoc(i);
			printf("%.0f°F = %.2f°C\n", i, res);
			cursor();
		}
	} else if(c == CELSIUS) {
		title(CELSIUS);
		while(fgets(s, 10, stdin) != NULL) {
			i = atoi(s);
			res = ctof(i);
			printf("%.0f°C = %.2f°F\n", i, res);
			cursor();
		}
	}
	printf("\n");
	return 0;
}



