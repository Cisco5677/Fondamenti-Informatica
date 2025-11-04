#include <stdio.h>
#include <stdlib.h>
#define N 5

/* Stampare gli elementi dell'array in ordine inverso */

int main() {
	int a[N];
	int i;
	
	printf("-----Inserimento dell'array----\n\n");
	for(i=0; i<N; i++){
		printf("Inserisci il valore di a[%d]: ",i);
		scanf("%d", &a[i]);
	}
	
	printf("\n\n-----Stampa dell'array in ordine inverso----\n\n");
	
	for(i=N-1; i>=0; i--){
		printf("\nIl valore di a[%d] = %d",i,a[i]);
	}
	
	return 0;
}
