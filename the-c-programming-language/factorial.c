/*	Calculates the factorial of a given number.	*/

#include <stdio.h>

int main(void) {
	
	int fact, i, res;

	printf("Enter a number: ");
	scanf("%i", &fact);			// future update, delete this unsecure function 

	if(fact < 0) {
		printf("Enter a valid number!\n");
		return 1;
	}

	res = 1;
	for(i = 1; i <= fact; i++) {
		res *= i;
	}

	printf("%d! = %d\n", fact, res);
	return 0;
}
