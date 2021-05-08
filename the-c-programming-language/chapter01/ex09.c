//	Exercise 1-rite a program to copy its input to its output, replacing
//	each string of one or more blanks by a single blank.

#include <stdio.h>

int main( void ) 
{
	unsigned long bl;
	bl = 0;

	int c;

	while((c = getchar()) != EOF) {
		if(c == ' ')
			bl++;
		else 
			bl = 0;

		if(bl <= 1)
			putchar(c);
	}

	return 0;
}
