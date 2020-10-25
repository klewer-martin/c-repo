#include <stdio.h>

int main(void) {
	
	int fact, i, res;

	printf("Ingrese un numero: ");
	scanf("%i", &fact);

	if(fact < 0) {
		printf("Numero invalido\n");
		return 1;
	}

	res = 1;
	for(i = 1; 1 <= fact; i++) {
		res = res * i;
	}

	printf("%d! = %d\n", fact, res);
	return 0;
}
