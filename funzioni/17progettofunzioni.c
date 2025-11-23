#include <stdio.h>
#include <stdlib.h>

/* Mostriamo all'utente un Menù al quale diamo due opzioni ovvero 
la somma di due numeri o la differenza di due numeri e l'opzione di uscita dal menu*/

int somma(int a, int b){
	printf("faccio la somma...");
	printf("\nInserisci il primo valore della somma: ");
	scanf("%d", &a);
	printf("Inserisci il secondo valore della somma: ");
	scanf("%d", &b);
	printf("\nLa somma dei due numeri e': %d\n", a+b);
}

int sottrazione(int a, int b){
	printf("Inserisci il primo valore della sottrazione: ");
	scanf("%d", &a);
	printf("Inserisci il secondo valore della sottrazione: ");
	scanf("%d", &b);
	printf("\nLa differenza dei due numeri e': %d\n", a-b);
}

int moltiplicazione(int a, int b){
	printf("Inserisci il primo valore della moltiplicazione: ");
	scanf("%d", &a);
	printf("Inserisci il secondo valore della moltiplicazione: ");
	scanf("%d", &b);
	printf("\nLa differenza dei due numeri e': %d\n", a*b);
}

int divisione(int a, int b){
	printf("Inserisci il primo valore della divisione: ");
	scanf("%d", &a);
	printf("Inserisci il secondo valore della divisione: ");
	scanf("%d", &b);
	printf("\nLa differenza dei due numeri e': %d\n", a/b);
}

int main() {
	int a=0;
	int b=0;
	int scelta=0;

	
	do{
		printf("\n----------------Menu'----------------\n");
		printf("1. Somma\n2. Differenza\n3. Moltiplicazione\n4. Divisione\n0. Esci");
		printf("\n--------------------------------\n");
		printf("\nInserisci la scelta----> ");
		scanf("%d", &scelta);
		
		switch(scelta){
			case 0:
			break;
			case 1:
				somma(a,b);
			break;
			
			case 2:
				sottrazione(a,b);
			break;
			
			case 3:
				moltiplicazione(a,b);
			break;
			
			case 4:
				divisione(a,b);
			break;
				
			default:
				printf("\x1b[31mErrore! Inserisci un numero valido\n\n\x1b[0m");
		}
			
	}while(scelta!=0);
	
	
	return 0;
}
