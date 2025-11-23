#include<stdio.h>
#include<stdlib.h> // ----> Libreria per la funziona rand() srand(time (NULL))
#include<time.h> // funzione time
#define N 10

/* Numeri casuali/random  */

int main(){
	
	srand(time(NULL));
	int a[N];
	int i;
	
	printf("\n-----Stampo i valori attuali-----\n\n");
	
	for(i=0; i<N; i++){
		printf("Il valore di a[%d] = %d\n",i,a[i]);
	}
	
	printf("\n-----Adesso do dei valori casuali-----\n\n");
	
	for(i=0; i<N; i++){
		a[i] = rand()%(101);
		printf("Il valore di a[%d] adesso e' = %d\n",i,a[i]);
	}
	
	return 0;
}
