#include<stdio.h>

/* fare un programma in cui ci sia una funzione che ci permette di fare il quadrato di un numero  */

int q;

int quadrato(int n){
	q=n*n;
	return q;
}


int main(){
	int n;
	
	printf("Inserisci il valore ");
	scanf("%d", &n);
	n=quadrato(n);
	printf("Il quadrato e' %d",n);	
	
	return 0;
}
