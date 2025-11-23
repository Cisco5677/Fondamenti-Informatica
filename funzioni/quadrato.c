#include<stdio.h>

/* Creiamo una Funzione per fare il quadrato di un numero */

int quadrato(int n){
  return n * n;
}

int main(){
	
	int numero = 0;
	int ris;
	
	printf("Inserisci un numero: ");
	scanf("%d", &numero);
	ris = quadrato(numero);
	printf("\nIl suo quadrato e' = %d\n", ris);
	
	return 0;
}
