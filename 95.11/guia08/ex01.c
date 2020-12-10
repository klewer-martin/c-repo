#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NO_ARG			  1
#define MAX_ARR_SIZE	100

typedef enum {
	OK,
	ERROR_PROGRAM_INVOCATION,
	ERROR_NULL_POINTER,
	ERROR_ALLOC
} status_t;

status_t validar_argumentos(int argc, char **argv);

int main (int argc, char * argv[]) {

	char *p;
	int i;
	status_t st;
	if((st = validar_argumentos(argc, argv) != OK))
		return st;

	if((p = (char *)malloc(2 * (argc * MAX_ARR_SIZE))) == NULL)
			return ERROR_ALLOC;

	for(i = 0; i < (argc - 1); i++, argv++)
		strlen((char *)argv);
		(char *)p = ((char *)(*(++argv)));


	free(p);
	return 0;
}

status_t validar_argumentos(int argc, char **argv) {
	if(argc == NO_ARG)
		return ERROR_PROGRAM_INVOCATION;
	else if(argv == NULL)
		return ERROR_NULL_POINTER;
		
	return 0;
}
