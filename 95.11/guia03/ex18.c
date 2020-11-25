#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100


int main ( void ) {

	char str[MAX_LEN];
	int aux, i, j;
	
	if(fgets(str, MAX_LEN, stdin) == NULL)
		return 1;

//	Pasa todo a minuscula;
	for(i = 0; str[i] != '\0'; i++)
		if(isupper(str[i]))
			str[i] = tolower(str[i]);

//	En caso de ser una oracion elimina los espacios en blanco;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == ' ') {
			aux = i;
			while(str[i] != '\0') {
				str[i] = str[i + 1];
				i++;
			}
			i = aux;
		}
	}

//	Asigna a i el valor de el ultimo caracter;
	for(i = 0; str[i] != '\n'; i++)
		;

//	Le restamos uno a i, ya que en la parte anterior
//	i es el indice de el caracter '\n';
	i = i - 1;

//	Esta parte compara uno a uno los caracteres;
//	primero con ultimo, segundo con anteultimo y
//	asi sucesivamente;
	for(j = 0; (str[j] == str[i]) && (str[j] != '\0'); j++, i--)
		;

//	Si la cadena es efectivamente capicua entonces
//	en la parte anterior j tiene que haber recorrido toda
//	la cadena, ya que si los caracteres no eran iguales
//	j no se incrementa, si la cadena es capicua entonces,
//	j termino valiendo el largo de la cadena;
	if(j == (strlen(str) - 1))
		printf("La cadena es capicua.\n");

	return 0;
}
