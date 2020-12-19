#include "../include/arguments.h"
#include "../include/macros.h"


//	Checks if the arguments are right;
status_t validate_arguments(int argc, char * argv[])
{
	if(argc == NO_CMD_ARGUMENTS)
		return ERROR_INVOCATING_PROGRAM;
	else if(argv == NULL)
		return ERROR_NULL_POINTER;

	return OK;
}

//	Set the files name acording to the arguments;
status_t set_files_name(int argc, char * argv[], char * src, char * dest)
{
	int i;
	for(i = 1; i < argc; i++) {
		if(!strcmp(argv[i], SOURCE_ARGUMENT)) {
			printf("Encontre un '-in'\n");
			strcpy(src, argv[++i]);
			printf("\tthen input file: %s\n", src);
		}
		if(!strcmp(argv[i], DESTINATION_ARGUMENT)) {
			printf("Encontre un '-out'\n");
			strcpy(dest, argv[++i]);
			printf("\tthen output file: %s\n", argv[i]);
		}

	}
	return OK;
}

