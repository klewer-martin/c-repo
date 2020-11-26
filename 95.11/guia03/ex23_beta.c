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
	num = atoi(buffer);

//	prints the integer in octal base;
	printf("%o\n", num);
	return 0;
}
