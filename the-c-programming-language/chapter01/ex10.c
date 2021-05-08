#include <stdio.h>

int main (void)
{
	int c;

	while((c = getchar()) != EOF) {
		if(c == '\t')
			printf("%s", "\\t");
		else if(c == '\\')
			printf("%s", "\\\\");
		else
			putchar(c);
	}
	return 0;
}
