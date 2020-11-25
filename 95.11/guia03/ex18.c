//	Reads a string of chars from stdin and check if it's
//	a palindrome.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100


int main ( void ) {

	char str[MAX_LEN];
	int aux, i, j;
	
	if(fgets(str, MAX_LEN, stdin) == NULL)
		return 1;

//	Converts all the string to lowercase;
	for(i = 0; str[i] != '\0'; i++)
		if(isupper(str[i]))
			str[i] = tolower(str[i]);

//	If the readed string it's a sentence erases all
//	the blank spaces;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == ' ') {
			aux = i;
			while(str[aux] != '\0') {
				str[aux] = str[aux + 1];
				aux++;
			}
		}
	}

//	Counts the length of the string;
	for(i = 0; str[i] != '\n'; i++)
		;

//	We subtract one from i because of the '\n' char;
	i = i - 1;

//	This part compares one by one the chars from the 
//	string, first with last, second with before last,
//	and so on, only comparing the next one if the previous
//	one was equal;
	for(j = 0; (str[j] == str[i]) && (str[j] != '\0'); j++, i--)
		;


//	If the string or sentence its palindrome, then in the previous
//	block j would end with the value of the total lengh, minus one
//	because of the last char;
	if(j == (strlen(str) - 1))
		printf("La cadena es capicua.\n");

	return 0;
}
