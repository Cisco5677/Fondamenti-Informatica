#include <stdio.h>
#include <stdlib.h>

/* stampa di 10 array */

int main() {

	int n;
	
	printf("Inserisci il numero dell'array--> ");
	scanf("%d", &n);
	
	int array[n];
	int i;
	
	for(i=0; i<n; i++){
		printf("Inserisci il %d valore dell'array---> ",i);
		scanf("%d", &array[i]);
	}
	
	printf("\nFaccio la stampa dell'array...\n");
	for(i=0; i<n; i++){
		printf("\nIl valore del %d array e': %d",i,array[i]);		
	}
	return 0;
}
