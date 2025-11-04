#include <stdio.h>
#include <stdlib.h>
#define N 5

/* La somma dei valori che si trovano in posizione pari */

int main() {
	int a[N];
	int i;
	int somma=0;
	
	printf("-----Inserimento dell'array----\n\n");
	for(i=0; i<N; i++){
		printf("Inserisci il valore di a[%d]: ",i);
		scanf("%d", &a[i]);
		if(i%2==0){
			somma=somma+a[i];
		}
	}
	

	
	printf("\nLa somma dei valori che si trovano in posizione pari e': %d", somma);
	
	return 0;
}
