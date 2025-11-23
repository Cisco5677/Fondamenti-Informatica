#include<stdio.h>

/* Variabili locali e globali 
	scope di n è solo nella funzione "incrementa" 
	
*/

int a;

void incrementa(){
	a=a+1;
	printf("\nIl nuovo valore nella funzione e': %d",a);
}

int incrementa2(int n){
	n=n+1;
	printf("\nIl nuovo valore nella funziona e': %d",n);
	return n;
}


int main(){
	
	int k=0;
	
	printf("Inserisci un valore a --> ");
	scanf("%d", &a);
	
	printf("Inserisci un valore k --> ");
	scanf("%d", &k);
	
	incrementa();
	k=incrementa2(k);
	
	printf("\nIl valore di a = %d",a);
	printf("\nIl valore di k = %d",k);
	
	return 0;
}
