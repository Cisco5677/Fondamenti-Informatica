#include <stdio.h>
#define N 5
/*  */

int main() {
	
	int a[N];
	int i;
	int media=0;
	int somma=0;
	
	printf("Inserimento dell'array\n\n");
	for(i=0; i<N; i++){
		printf("Inserisci a[%d] = ",i);
		scanf("%d", &a[i]);
		somma = somma + a[i];
	}
	media= somma/N;
	printf("La somma di tutti gli elementi dell'array e': %d",media);
	return 0;
}
