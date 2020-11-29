#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100



int main ( void ) {

    char buffer[MAX_LEN], str1[MAX_LEN], str2[MAX_LEN];
	char dest[MAX_LEN];
    int i, j, num;

    if(fgets(str1, MAX_LEN, stdin) == NULL) {
        return 1;
	}

//  This part couts the lengh of the first string
//	and removes the new line character;
    for(i = 0; str1[i] != '\0'; i++)
		if(str1[i] == '\n')
			str1[i] = str1[i + 1];

	printf("str1 length = %d\n", i);

    if(fgets(str2, MAX_LEN, stdin) == NULL) {
        return 1;
	}

    if(fgets(buffer, MAX_LEN, stdin) == NULL) {
       return 1;
	}

    num = atoi(buffer);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("num = %d\n", num);

//  This part checks if the input number is bigger than
//  the length of the string;
    if(num > i) {
        return 1;
	}

	for(i = 0; str2[i] != '\0'; i++)
		if(str2[i] == '\n')
			str2[i] = '\0';

    for(i = 0, j = 0; str2[j] != '\0'; i++) {
        if(i <= num) {
            dest[i] = str1[i];
		} else { 
            dest[i] = str2[j];
            j++;
		}
	}
//	printf("%d\n", i);
//	printf("%d\n", j);
//	printf("%s\n", dest);
    return 0;
}
