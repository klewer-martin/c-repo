#include <stdio.h>

#ifndef MAX_LEN
	#define MAX_LEN 100
#endif


typedef enum {
	FMT_MAYUSCULAS,	FMT_MINUSCULAS
} format_t;


int main(void) {

	char str[MAX_LEN];
	int i, aux;

	if(fgets(str, MAX_LEN, stdin) == NULL)
		return 1;

		

	printf("%s\n", str);
	return 0;
}
