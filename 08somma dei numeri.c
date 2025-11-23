#include <stdio.h>
#include <stdlib.h>

/* Calcolo della sommma dei numeri da 1 a 100 */

int main() {
	int i;
	int somma;
	
	for(i=0; i<=100; i++){
		somma+=i;
	}
	printf("Il valore della sommma dei numeri da 1 a 100 e': %d",somma);
	return 0;
}
