#include <stdio.h>
#define N 5
/* Dato un array di N numeri interi, calcolare e stampare la somma di tutti gli elementi */

int main() {
	
	int a[N];
	int i;
	int somma=0;
	
	printf("Inserimento dell'array\n\n");
	for(i=0; i<N; i++){
		printf("Inserisci a[%d] = ",i);
		scanf("%d", &a[i]);
		somma= somma + a[i];
	}
	
	printf("La somma di tutti gli elementi dell'array e': %d",somma);
	return 0;
}
