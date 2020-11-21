#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

typedef enum {
	OK, ERROR
} status_t;

//	status_t left_trim(str);

int main( void ) {

	char buffer[MAX_LEN];
	int i, j, len;

	if((fgets(buffer, MAX_LEN, stdin)) == NULL)
		return ERROR;

	len = strlen(buffer);
	printf("%d\n", len);

	char str[len - 1];
	char aux;

	for(i = 0; buffer[i] == ' '; i++) {
		//for(j = 0; buffer[j] == ' '; j++)
		//	str[i] = buffer[j];
		//	printf("for\n");
		str[i] = buffer[i];
		if(buffer[i] == ' ') {
			str[i] = buffer[i + 1];
			i++;
		}
		//str[i] = buffer[j];
	}
	
	printf("%s\n", str);

	return OK;
}
