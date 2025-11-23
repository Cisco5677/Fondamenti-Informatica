#include <stdio.h>

/* inserisci i valori dei v1 e v2 e fai la somma con risultatto in v3 */

int main() {
	
	int v1[10];
	int v2[10];
	int v3[10];
	int i;
	
	for(i=0; i<10; i++){
		printf("Inserisci il %d numero del primo array--> ",i);
		scanf("%d", &v1[i]);
	}
	
	for(i=0; i<10; i++){
		printf("Inserisci il %d numero del secondo array--> ",i);
		scanf("%d", &v2[i]);
	}
	
	for(i=0; i<10; i++){
		v3[i] = v1[i] + v2[i];
		printf("\nIl valore del 3 array del %d indice e': %d",i,v3[i]);
	}
	
	
	return 0;
}
