#include <stdio.h>

/* Mostriamo all'utente un Menù al quale diamo due opzioni ovvero 
la somma di due numeri o la differenza di due numeri e l'opzione di uscita dal menu*/

int main() {
	int a=0;
	int b=0;
	int scelta=0;
	int somma;
	int differenza;
	
	do{
		printf("\n----------------Menu'----------------\n");
		printf("1. Somma\n2. Differenza\n0. Esci");
		printf("\n--------------------------------\n");
		printf("\nInserisci la scelta----> ");
		scanf("%d", &scelta);
		
		if(scelta==1){
			
			printf("\nInserisci il primo valore della somma: ");
			scanf("%d", &a);
			printf("Inserisci il secondo valore della somma: ");
			scanf("%d", &b);
			somma=a+b;
			printf("\nLa somma dei due numeri e': %d\n", somma);
			
		} else if(scelta==2){
			
			printf("Inserisci il primo valore della sottrazione: ");
			scanf("%d", &a);
			printf("Inserisci il secondo valore della sottrazione: ");
			scanf("%d", &b);
			differenza=a-b;
			printf("\nLa differenza dei due numeri e': %d\n", differenza);
		}
		
	}while(scelta!=0);
	
	
	return 0;
}
