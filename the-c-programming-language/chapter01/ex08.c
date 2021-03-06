


#include <stdio.h>


int main( void ) {

	
	int c, bl, tb, nl;
	bl = tb = nl = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ') 
			bl++;
		else if (c == '\t') 
			tb++;
		else if (c == '\n')
			nl++;
	}

	printf("Blanks\t\t=\t%d\nTabs\t\t=\t%d\nNewlines\t=\t%d\n", bl, tb, nl);
	return 0;
}
