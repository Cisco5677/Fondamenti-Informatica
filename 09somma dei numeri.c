#include <stdio.h>
#include <stdlib.h>

/* Calcolo della sommma dei numeri da 1 a 100 in cicli */

int main() {
	int i;
	int somma;
	somma=0;
	
	for(i=0; i<=100; i++){
		somma+=i;
		printf("la sommma del cilco %d dei numeri da 1 a 100 e': %d\n",i,somma);
	}
	return 0;
}
