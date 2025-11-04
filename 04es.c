#include <stdio.h>
#include <stdlib.h>
#define N 5

/* Dato un array di interi, contare quanti sono pari e quanti sono dispari. */

int main() {
	
	int a[N];
	int i;
	int pari=0;
	int dispari=0;
	
	printf("Inserimento del'array\n\n");
	for(i=0; i<N; i++){
		printf("Inserisci il valore a[%d]: ",i);
		scanf("%d", &a[i]);
		
		if(a[i]%2==0){
			pari++;
		} else{
			dispari++;
		}
	}
	
	
	printf("\nI numeri pari sono : %d", pari);
	printf("\nI numeri dispari sono: %d", dispari);
	
	return 0;
}
