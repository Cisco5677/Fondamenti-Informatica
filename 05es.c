#include <stdio.h>
#include <stdlib.h>
#define N 5

/* chiedere un numero all'utente e verificare se è presente */

int main() {
	
	int a[N];
	int i;
	int presente=0;
	int num;
	
	printf("-----Inserimento del'array-----\n\n");
	
	for(i=0; i<N; i++){
		printf("Inserisci il valore a[%d]: ",i);
		scanf("%d", &a[i]);
	}
	
	printf("Inserisci il numero da cercare: ");
	scanf("%d", &num);
	
	for(i=0; i<N; i++){
		if(num==a[i]){
			printf("Il numero e' presente!!");
			presente++;
		} 
		
	}
	if(presente==0){
		printf("Il numero non e' presente nell'array!!!");
	}
	
	return 0;
}
