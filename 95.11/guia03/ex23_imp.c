#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100

int main ( void ) {

	char buffer[MAX_LEN];
	int num;
	char num2[MAX_LEN];

	if(fgets(buffer, MAX_LEN, stdin) == NULL)
		return 1;

//	Converts the input str to int;
	if(	(num = atoi(buffer)) < 0 ) {
		fprintf(stderr, "Debe ingresar un entero positivo!\n");
		return 1;
	}
	
//	prints the integer in octal base;
	printf("%o\n", num);
	return 0;
}
